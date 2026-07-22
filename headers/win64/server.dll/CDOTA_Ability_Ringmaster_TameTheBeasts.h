#pragma once

class CDOTA_Ability_Ringmaster_TameTheBeasts : public CDOTABaseAbility /*0x0*/  // sizeof 0x5C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vCrackLocation; // offset 0x580, size 0xC, align 4
    char _pad_058C[0x4]; // offset 0x58C
    CDOTA_BaseNPC* m_pTarget; // offset 0x590, size 0x8, align 8
    CHandle< CBaseEntity > m_hThinker; // offset 0x598, size 0x4, align 4
    ParticleIndex_t m_nAvailableAOEFXIndex; // offset 0x59C, size 0x4, align 255
    ParticleIndex_t m_nFinalAOEFXIndex; // offset 0x5A0, size 0x4, align 255
    ParticleIndex_t m_nWhipAOEFXIndex; // offset 0x5A4, size 0x4, align 255
    bool m_bWhiped; // offset 0x5A8, size 0x1, align 1
    char _pad_05A9[0x3]; // offset 0x5A9
    GameTime_t m_flStartTime; // offset 0x5AC, size 0x4, align 255
    VectorWS m_vStartLocation; // offset 0x5B0, size 0xC, align 4
    char _pad_05BC[0x4]; // offset 0x5BC
};
