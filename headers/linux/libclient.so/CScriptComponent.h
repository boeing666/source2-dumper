#pragma once

class CScriptComponent : public CEntityComponent /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (entity2) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CUtlSymbolLarge m_scriptClassName; // offset 0x30, size 0x8, align 8 | MNotSaved
};
