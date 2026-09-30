#pragma once

class CGameSceneNodeHandle  // sizeof 0x10, align 0x8 [vtable trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CEntityHandle m_hOwner; // offset 0x8, size 0x4, align 4
    CUtlStringToken m_name; // offset 0xC, size 0x4, align 4
};
