#pragma once

class CDOTA_Ability_Huskar_Life_Break : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x860*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x86C]; // offset 0x0
    VectorWS m_vProjectileLocation; // offset 0x86C, size 0xC, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x878, size 0x4, align 4
    bool m_bInterrupted; // offset 0x87C, size 0x1, align 1
    char _pad_087D[0x3]; // offset 0x87D
};
