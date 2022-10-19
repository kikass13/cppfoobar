
from enum import unique
from inspect import iscoroutine
from operator import truediv
import re
from collections import OrderedDict

#https://www.nltk.org/howto/tree.html
#https://tedboy.github.io/nlps/generated/generated/nltk.Tree.fromstring.html
from nltk.tree import *


class LayoutParser:
    class Attribute:
        def __init__(self, s):
            self.name, self.bytesize, self.type = s.split(":")
        def __repr__(self) -> str:
            return "(%s,%s,%s)" % (self.name, self.bytesize, self.type)
    
    def __init__(self):
        self.d = OrderedDict()
        self.tree = None
    def layout(self, s):
        self.tree = ParentedTree.fromstring(s, brackets="{}")
        self.tree.pretty_print()
        self.parseTree(self.tree)
    def getLayout(self):
        return self.d

    def createDictEntry(self, parent, name, val={}):
        if not parent:
            self.d[name] = val
        else:
            def crawl(d, parent, name):
                if parent in d:
                    print("FOUND %s %s" % (parent, name))
                    d[parent][name] = val
                    return d
                else:
                    print("else")
                    for k,v in d.items():
                        print("SEARCH: %s" % v)
                        dd = crawl(v,parent, name, val)
                        return d

            print("PRE  -- %s %s" % (parent, name))
            print(self.d)
            crawl(self.d, parent, name)
            print(self.d)
            print("POST")


    ### dict manipulation
    def addObject(self, name, parent = None):
        self.createDictEntry(parent, name)

        
    def addAttribute(self, name, a):
        print("  add Attribute: %s" % a)
        self.d[name][a.name] = a

    def parseObject(self, s, subs=[], parent=None):
        print(s)
        # split = s.find("(")
        # name = s[0:split].strip()
        # ds = s[split+1:]
        # self.addObject(name, parent=parent)
        # self.parseContents(name, ds, subs)
        
    def cleanTreeName(self, t):
        tStr = str(t)
        return tStr


    def parseTree(self, tree, parent=None):
        for subtree in tree:
            if isinstance(subtree, Tree):
                print(subtree.label())
                self.parseTree(subtree)
            else:
                # for child in subtree:
                print(subtree)

        #     # # print(t)
            # # subs = [child for child in t]
            # # print(len(subs))
            # # self.parseObject(self.cleanTreeName(t), subs=subs, parent=parent)
 
    def parseContents(self, name, s, subs):
        if(subs):
            for sub in subs:
                if(isinstance(sub, Tree)):
                    print(sub)
                    self.parseTree(sub, name)
                else:
                    print("LEAF ATTR")
                    print(sub)
        else:
            attributes = re.findall('\((.*?)\)',s)
            for a in attributes:
                a = LayoutParser.Attribute(a)
                self.addAttribute(name, a)

def main():
    # string = "{Human#(age:4:i)(name:20:ai/20)(r:1:i)}"
    # string = "{Developer#(commits:4:i)(motivation:4:i)}"
    # string = "{Human#(age:4:i)(name:20:ai/20)(r:1:i)}{Developer#(commits:4:i)(motivation:4:i)}"
    # string = "{{Human(age:4:i)(name:20:ai/20)(r:1:i)}{Developer(commits:4:i)(motivation:4:i)}{Xaxa{Sub(a:4:i)(b:4:i)}(some:20:ai/5)(arrarr:160:aai/8/10){Sub2(arr:4:i)}(arararar:100:aaai/5/2/10)}}"
    string = "{ {Human age:4:i name:20:ai/20 r:1:i }  {Developer commits:4:i motivation:4:i }  {Xaxa  {Sub a:4:i b:4:i } some:20:ai/5 arrarr:160:aai/8/10  {Sub2 arr:4:i } arararar:100:aaai/5/2/10 } }"
    lp = LayoutParser()
    lp.layout(string)
    print(lp.getLayout())

if __name__ == '__main__':
    main()