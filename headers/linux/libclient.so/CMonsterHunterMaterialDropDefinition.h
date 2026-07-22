#pragma once

class CMonsterHunterMaterialDropDefinition  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_strMaterialName; // offset 0x0, size 0x8, align 8
    int32 m_nAmount; // offset 0x8, size 0x4, align 4
    char _pad_000C[0xC]; // offset 0xC
};
