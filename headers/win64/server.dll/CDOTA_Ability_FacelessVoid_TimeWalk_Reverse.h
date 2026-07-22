#pragma once

class CDOTA_Ability_FacelessVoid_TimeWalk_Reverse : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x580*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    int32 speed; // offset 0x590, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x594, size 0x4, align 4
    VectorWS m_vProjectileLocation; // offset 0x598, size 0xC, align 4
    VectorWS m_vStartLocation; // offset 0x5A4, size 0xC, align 4
};
