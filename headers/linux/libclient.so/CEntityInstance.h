#pragma once

class CEntityInstance  // sizeof 0x30, align 0xFF [vtable] (entity2)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlSymbolLarge m_iszPrivateVScripts; // offset 0x8, size 0x8, align 8
    CEntityIdentity* m_pEntity; // offset 0x10, size 0x8, align 8
    char _pad_0018[0x10]; // offset 0x18
    CScriptComponent* m_CScriptComponent; // offset 0x28, size 0x8, align 8
};
