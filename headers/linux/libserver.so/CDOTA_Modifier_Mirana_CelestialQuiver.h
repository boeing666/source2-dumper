#pragma once

class CDOTA_Modifier_Mirana_CelestialQuiver : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_damage; // offset 0x1A78, size 0x4, align 4
    int32 quiver_restore; // offset 0x1A7C, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A80, size 0x18, align 8
};
