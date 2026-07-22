#pragma once

class CAnimScriptManager  // sizeof 0x1A0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlVector< ScriptInfo_t > m_scriptInfo; // offset 0x10, size 0x18, align 8
    char _pad_0028[0x178]; // offset 0x28
};
