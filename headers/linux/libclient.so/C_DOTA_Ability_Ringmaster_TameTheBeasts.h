#pragma once

class C_DOTA_Ability_Ringmaster_TameTheBeasts : public C_DOTABaseAbility /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    VectorWS m_vCrackLocation; // offset 0x824, size 0xC, align 4
    C_DOTA_BaseNPC* m_pTarget; // offset 0x830, size 0x8, align 8
    CHandle< C_BaseEntity > m_hThinker; // offset 0x838, size 0x4, align 4
    ParticleIndex_t m_nAvailableAOEFXIndex; // offset 0x83C, size 0x4, align 255
    ParticleIndex_t m_nFinalAOEFXIndex; // offset 0x840, size 0x4, align 255
    ParticleIndex_t m_nWhipAOEFXIndex; // offset 0x844, size 0x4, align 255
    bool m_bWhiped; // offset 0x848, size 0x1, align 1
    char _pad_0849[0x3]; // offset 0x849
    GameTime_t m_flStartTime; // offset 0x84C, size 0x4, align 255
    VectorWS m_vStartLocation; // offset 0x850, size 0xC, align 4
    char _pad_085C[0x4]; // offset 0x85C
};
