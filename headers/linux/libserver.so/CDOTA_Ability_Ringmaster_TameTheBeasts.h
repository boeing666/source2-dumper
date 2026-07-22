#pragma once

class CDOTA_Ability_Ringmaster_TameTheBeasts : public CDOTABaseAbility /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vCrackLocation; // offset 0x85C, size 0xC, align 4
    CDOTA_BaseNPC* m_pTarget; // offset 0x868, size 0x8, align 8
    CHandle< CBaseEntity > m_hThinker; // offset 0x870, size 0x4, align 4
    ParticleIndex_t m_nAvailableAOEFXIndex; // offset 0x874, size 0x4, align 255
    ParticleIndex_t m_nFinalAOEFXIndex; // offset 0x878, size 0x4, align 255
    ParticleIndex_t m_nWhipAOEFXIndex; // offset 0x87C, size 0x4, align 255
    bool m_bWhiped; // offset 0x880, size 0x1, align 1
    char _pad_0881[0x3]; // offset 0x881
    GameTime_t m_flStartTime; // offset 0x884, size 0x4, align 255
    VectorWS m_vStartLocation; // offset 0x888, size 0xC, align 4
    char _pad_0894[0x4]; // offset 0x894
};
