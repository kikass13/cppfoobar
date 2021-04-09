/*
 * AUTOMATICALLY GENERATED FILE - DO NOT EDIT
 */

// Generated from /home/duck/gitclones/erpc/erpcgen/src/templates/py_server.template
extern const char * const kPyServer;

const char * const kPyServer = 
"{% if mlComment != \"\"%}\n"
"{$mlComment}\n"
"\n"
"{% endif %}\n"
"#\n"
"# Generated by erpcgen {$erpcVersion} on {$todaysDate}.\n"
"#\n"
"# AUTOGENERATED - DO NOT EDIT\n"
"#\n"
"\n"
"import erpc\n"
"from . import common, interface\n"
"{% if empty(group.includes) == false %}\n"
"{%  for inc in group.includes %}\n"
"from . import {$inc}\n"
"{%  endfor -- group.includes %}\n"
"{% endif -- empty(group.includes) %}\n"
"\n"
"{% if functions %}\n"
"{%  for f in functions %}\n"
"{%   if count(f.callbacks) > 1 %}\n"
"_{$f.name} = [ {%    for c in f.callbacks %}{$c.name}{%     if !loop.last %}, {%     endif -- loop.last %}{%    endfor -- f.callbacks %} ]\n"
"{%   endif -- f.callbacks.size() %}\n"
"{%  endfor -- functions %}\n"
"\n"
"{%  endif -- functions %}\n"
"{% for iface in group.interfaces %}\n"
"# Client for {$iface.name}\n"
"class {$iface.name}Service(erpc.server.Service):\n"
"    def __init__(self, handler):\n"
"        super({$iface.name}Service, self).__init__(interface.I{$iface.name}.SERVICE_ID)\n"
"        self._handler = handler\n"
"        self._methods = {\n"
"{% for fn in iface.functions %}\n"
"                interface.I{$iface.name}.{$upper(fn.name)}_ID: self._handle_{$fn.name},\n"
"{% endfor -- fn %}\n"
"            }\n"
"\n"
"{% for fn in iface.functions %}\n"
"    def _handle_{$fn.name}(self, sequence, codec):\n"
"{% if fn.outParameters %}\n"
"        # Create reference objects to pass into handler for out/inout parameters.\n"
"{%  for p in fn.outParameters if not p.serializedViaMember %}\n"
"        {$p.name} = erpc.Reference()\n"
"{%  endfor -- outParams %}\n"
"\n"
"{% endif -- fn.outParameters %}\n"
"        # Read incoming parameters.\n"
"{% for p in fn.inParameters if not p.serializedViaMember %}\n"
"{%  if p.direction == \"in\" %}\n"
"{%   set p_name = p.name %}\n"
"{%  elif p.direction == \"inout\" %}\n"
"{%   set p_name = p.name & \".value\" %}\n"
"{%  endif -- dir %}\n"
"{%  if p.isNullable %}\n"
"        if not codec.read_null_flag():\n"
"            {$decodeValue(p.type, p_name, \"common.\", \"codec\", \"            \", 0)}\n"
"        else:\n"
"            {$p.name if p.direction == \"in\" else p.name & \".value\"} = None\n"
"{%  else -- isNullable %}\n"
"{%   if p.type.type == 'union' %}\n"
"        {$p.name}, {$p.discriminator} = common.{$p.type.name}()._read(codec)\n"
"{%   else%}\n"
"        {$decodeValue(p.type, p_name, \"common.\", \"codec\", \"        \", 0)}\n"
"{%   endif -- isUnion %}\n"
"{%  endif -- isNullable %}\n"
"{% endfor -- inParams %}\n"
"\n"
"        # Invoke user implementation of remote function.\n"
"        {% if fn.returnValue.type.type != \"void\" %}_result = {% endif %}self._handler.{$fn.name}({% for p in fn.parameters if not p.lengthForMember %}{$p.name}{% if not loop.last %}, {% endif %}{% endfor %})\n"
"{% if not fn.isOneway %}\n"
"\n"
"        # Prepare codec for reply message.\n"
"        codec.reset()\n"
"\n"
"        # Construct reply message.\n"
"        codec.start_write_message(erpc.codec.MessageInfo(\n"
"            type=erpc.codec.MessageType.kReplyMessage,\n"
"            service=interface.I{$iface.name}.SERVICE_ID,\n"
"            request=interface.I{$iface.name}.{$upper(fn.name)}_ID,\n"
"            sequence=sequence))\n"
"{% for p in fn.outParameters if not p.serializedViaMember %}\n"
"{%  if p.isNullable %}\n"
"        if {$p.name}.value != None:\n"
"            {$encodeValue(p.type, p.name & \".value\", \"codec\", \"            \", 0)}\n"
"{%  else -- isNullable %}\n"
"        if {$p.name}.value is None:\n"
"            raise ValueError(\"{$p.name} is None\")\n"
"{%   if p.type.type == 'union' %}\n"
"        {$p.name}._write(codec, {$p.discriminator})\n"
"{%   else%}\n"
"        {$encodeValue(p.type, p.name & \".value\", \"codec\", \"        \", 0)}\n"
"{%   endif -- isUnion %}\n"
"{%  endif -- isNullable %}\n"
"{% endfor -- outParams %}\n"
"{% if fn.isReturnValue && fn.returnValue.type.type != \"void\" %}\n"
"        {$encodeValue(fn.returnValue.type, \"_result\", \"codec\", \"        \", 0)}\n"
"{% endif -- isReturnValue %}\n"
"{% endif -- isOneway %}\n"
"\n"
"{% endfor -- fn %}\n"
"\n"
"{% endfor -- iface %}\n"
;
