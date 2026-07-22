#pragma once

class CDOTA_Modifier_AghsFort_TorrentEffectPotion_Thinker : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 m_fProcChance; // offset 0x1A58, size 0x4, align 4
    int32 m_nRadius; // offset 0x1A5C, size 0x4, align 4
    int32 m_nMovespeedBonus; // offset 0x1A60, size 0x4, align 4
    float32 m_fStunDuration; // offset 0x1A64, size 0x4, align 4
    float32 m_fSlowDuration; // offset 0x1A68, size 0x4, align 4
    float32 m_fDelay; // offset 0x1A6C, size 0x4, align 4
    int32 m_nTorrentDamage; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
