#pragma once

class C_DOTA_Ability_Ringmaster_TameTheBeasts : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    VectorWS m_vCrackLocation; // offset 0x6A8, size 0xC, align 4
    char _pad_06B4[0x4]; // offset 0x6B4
    C_DOTA_BaseNPC* m_pTarget; // offset 0x6B8, size 0x8, align 8
    CHandle< C_BaseEntity > m_hThinker; // offset 0x6C0, size 0x4, align 4
    ParticleIndex_t m_nAvailableAOEFXIndex; // offset 0x6C4, size 0x4, align 255
    ParticleIndex_t m_nFinalAOEFXIndex; // offset 0x6C8, size 0x4, align 255
    ParticleIndex_t m_nWhipAOEFXIndex; // offset 0x6CC, size 0x4, align 255
    bool m_bWhiped; // offset 0x6D0, size 0x1, align 1
    char _pad_06D1[0x3]; // offset 0x6D1
    GameTime_t m_flStartTime; // offset 0x6D4, size 0x4, align 255
    VectorWS m_vStartLocation; // offset 0x6D8, size 0xC, align 4
    char _pad_06E4[0x4]; // offset 0x6E4
};
