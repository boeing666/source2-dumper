#pragma once

class CAI_CitadelSenses : public CAI_Senses /*0x0*/  // sizeof 0x158, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x100]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecSeenUnits; // offset 0x100, size 0x18, align 8
    GameTime_t m_flTimeLastLook; // offset 0x118, size 0x4, align 255
    char _pad_011C[0x34]; // offset 0x11C
    CITADEL_UNIT_TARGET_TYPE m_iTargetTypes; // offset 0x150, size 0x4, align 4
    char _pad_0154[0x4]; // offset 0x154
};
