#pragma once

class CDOTA_Ability_Axe_CullingBlade : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x580*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    bool m_bInterrupted; // offset 0x590, size 0x1, align 1
    char _pad_0591[0x3]; // offset 0x591
    VectorWS m_vProjectileLocation; // offset 0x594, size 0xC, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x5A0, size 0x4, align 4
    char _pad_05A4[0x4]; // offset 0x5A4
};
