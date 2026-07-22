#pragma once

struct ArtyCannonDef_t : public ArtyGameObjectDef_t /*0x0*/  // sizeof 0xF0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0xB0]; // offset 0x0
    bool m_bDirectAimAtTarget; // offset 0xB0, size 0x1, align 1
    char _pad_00B1[0x7]; // offset 0xB1
    CUtlVector< CUtlString > m_vecWeapons; // offset 0xB8, size 0x18, align 8
    char _pad_00D0[0x18]; // offset 0xD0
    Vector2D m_vShotOffset; // offset 0xE8, size 0x8, align 4
};
