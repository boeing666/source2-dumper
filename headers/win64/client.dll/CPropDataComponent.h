#pragma once

class CPropDataComponent : public CEntityComponent /*0x0*/  // sizeof 0x40, align 0xFF [vtable trivial_dtor] (client)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    float32 m_flDmgModBullet; // offset 0x10, size 0x4, align 4
    float32 m_flDmgModClub; // offset 0x14, size 0x4, align 4
    float32 m_flDmgModExplosive; // offset 0x18, size 0x4, align 4
    float32 m_flDmgModFire; // offset 0x1C, size 0x4, align 4
    CUtlSymbolLarge m_iszPhysicsDamageTableName; // offset 0x20, size 0x8, align 8
    CUtlSymbolLarge m_iszBasePropData; // offset 0x28, size 0x8, align 8
    int32 m_nInteractions; // offset 0x30, size 0x4, align 4
    bool m_bSpawnMotionDisabled; // offset 0x34, size 0x1, align 1
    char _pad_0035[0x3]; // offset 0x35
    int32 m_nDisableTakePhysicsDamageSpawnFlag; // offset 0x38, size 0x4, align 4
    int32 m_nMotionDisabledSpawnFlag; // offset 0x3C, size 0x4, align 4
};
