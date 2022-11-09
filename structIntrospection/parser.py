import re
from collections import OrderedDict
import json
import struct

# https://www.nltk.org/howto/tree.html
# https://tedboy.github.io/nlps/generated/generated/nltk.Tree.fromstring.html
from nltk.tree import *


#         super().__init__(CommandIds.TASK, [(elmopcbproxyenabled, "!B")])

# def unpackFloat(bytes):
#     return struct.unpack('f', bytes)

class Attribute:
    def __init__(self, s):
        ss = s.split(":")
        self.name = ss[0]
        self.bytesize = int(ss[1]) 
        self.type = ss[2]
        self.endian = '!' ###! is big endian notation for python struct unpack 
        self.value = None
    def apply(self, stream):
        # print("Reading : %s bytes" % self.bytesize)
        if  "a" not in self.type.lower(): 
            self.value = struct.unpack(self.endian + self.type, stream[:self.bytesize])
        stream = stream[self.bytesize:]
        return stream
    def set(self, v):
        self.value = v
    def get(self):
        return self.value
    def __repr__(self) -> str:
        return "(%s,%s,%s,%s)" % (self.name, self.bytesize, self.type, self.value)

class LayoutParser:
    def __init__(self):
        self.d = OrderedDict()
        self.tree = None

    def layout(self, s):
        self.tree = ParentedTree.fromstring(s, brackets="{}")
        self.attributeLookups = {}
        self.parseTree(self.tree)
    def printLayout(self):
        self.tree.pretty_print()
    def getLayout(self):
        return self.d
    def getFlattenedLayout(self):
        flattened = []
        leaves = self.tree.leaves()
        for l in leaves:
            a = self.convertAttribute(l)
            if a:
                flattened.append(a)
        return flattened
    def getAttributeLookups(self):
        return self.attributeLookups

    ### parse
    def parseTree(self, tree):
        productions = self.tree.productions()
        for p in productions:
            l = str(p.lhs())
            r = [str(pp) for pp in p.rhs()]
            if l and r:
                self.addObject(l, r)

    def addObject(self, name, parent=None):
        self.createDictEntry(name, parent)

    def convertAttribute(self, e):
        a = None
        try:
            print(a, e)
            a = Attribute(e)
        except Exception as ee:
            print(ee)
        return a
    def addAttribute(self, d, a, keychain):
        ### add attribute to given dict
        d[a.name] = a
        ### remember the keychain, containign all keys that lead to this attribute
        self.attributeLookups[a.name] = keychain
        # print("remembering: %s with %s" % (a.name, keychain) )

    ### dict manipulation
    def createDictEntry(self, key, children):
        def convertAll(children, keychain):
            d = {}
            for c in children:
                a = self.convertAttribute(c)
                if a:
                    self.addAttribute(d, a, keychain)
                else:
                    d[c] = c
            return d

        def crawl(d, key, children, keychain):
            if not isinstance(d, dict):
                return False
            if key in d:
                d[key] = convertAll(children, keychain)
                return True
            else:
                for k, v in d.items():
                    keychain.append(k)
                    if crawl(v, key, children, keychain):
                        return True
                    else:
                        keychain.pop()
                return False

        keychain = [key]
        if not crawl(self.d, key, children, keychain):
            self.d[key] = convertAll(children, keychain)


class BinaryParser:
    def __init__(self, layoutparser : LayoutParser):
        self.parser = layoutparser
        self.flattened = list(self.parser.getFlattenedLayout()) ###copy
        self.dataDict = dict(self.parser.getLayout())  ###copy
        self.lookup = dict(self.parser.getAttributeLookups()) ###copy 

    def data(self):
        return self.dataDict
    def parse(self, stream):
        ### replace our dataDict - currently containing attributes - 
        ### with the same dict but all attributes beeing only their respective casted value
        ##      parse the stream for each attribute a, so that a contains the parsed value
        ##      set the attribute in our dataDict by utilizing the attribute -> keychain lookup dict
        for a in self.flattened:
            ### apply attribute to stream
            stream = a.apply(stream)
            ### put attribute into our data dict
            keychain = list(self.lookup.get(a.name, None)) ### copy
            if keychain:
                self.setData(self.dataDict, keychain, a.name, a.value)

    def setData(self, d, keys, akey, aval):
        k = keys.pop()
        ### is keychain list not empty?
        if keys:
            self.setData(d[k], keys, akey, aval)
        else: 
            ### wat do we want in here?
            ## {'Human': {'age': (511,),
            d[k][akey] = aval
            ## {'Human': {'age': (age,4,i,(511,))
            # d[k][akey].set(aval)


def main():
    # string = "{ {Human age:4:i name:20:ab/20 r:1:B }  {Developer commits:4:I motivation:4:i }  {Xaxa  {Sub a:4:i b:8:Q } some:20:ai/5 arrarr:160:aaH/8/10  {Sub2 arr:4:i } arararar:400:aaaf/5/2/10 } }"
    # string = "{ {OTHER_NAME_FOR_SUB a:4:i b:8:Q }  {OTHER_NAME_FOR_SUB2 arr:32:a/8,i }  { UNKNOWN_OVEWRITE data:12:* } { BBBBB data:12:* } {bbbb  {a v:4:i } }  { BOOLEAN data:1:B } { INT data:4:i } {END a:4:i b:8:Q } }"
    string = "{ {OTHER_NAME_FOR_SUB a:4:i b:8:Q }  {OTHER_NAME_FOR_SUB2 arr:32:a/8,i }  { UNKNOWN_OVEWRITE data:12:* } { BBBBB data:12:* } {bbbb  {a v:4:i } }  {flags bits:1:a/1,b/1,c/1,d/1,e/1,f/3,}  {END a:4:i b:8:Q } }"
    lp = LayoutParser()
    lp.layout(string)
    lp.printLayout()

    stream = bytearray([0,0,1,255,  1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, ])
    bp = BinaryParser(lp)
    bp.parse(stream)
    d = bp.data()

    ### print all parsed attributes
    class MyEncoder(json.JSONEncoder):
        def default(self, o):
            return o.__dict__
    print(json.dumps(d, sort_keys=True, indent=4, cls=MyEncoder))
    ### we can also access attributes like this
    print(d["Human"]["age"])


    
if __name__ == "__main__":
    main()
