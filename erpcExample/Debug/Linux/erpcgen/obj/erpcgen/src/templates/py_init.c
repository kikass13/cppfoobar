/*
 * AUTOMATICALLY GENERATED FILE - DO NOT EDIT
 */

// Generated from /home/duck/gitclones/erpc/erpcgen/src/templates/py_init.template
extern const char * const kPyInit;

const char * const kPyInit = 
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
"try:\n"
"    from erpc import erpc_version\n"
"    version = erpc_version.ERPC_VERSION\n"
"except ImportError:\n"
"    version = \"unknown\"\n"
"if version != \"{$erpcVersion}\":\n"
"    raise ValueError(\"The generated shim code version ({$erpcVersion}) is different to the rest of eRPC code (%s). \\\n"
"Install newer version by running \\\"python setup.py install\\\" in folder erpc/erpc_python/.\" % repr(version))\n"
"\n"
"from . import common\n"
"from . import client\n"
"from . import server\n"
"from . import interface\n"
;

