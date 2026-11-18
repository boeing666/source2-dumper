#pragma once

class CDOTA_Modifier_AghsFort_PlayerTransform : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    itemid_t m_nCourierItemId; // offset 0x1AF8, size 0x8, align 255
    CUtlString m_ModelNameOfDisguise; // offset 0x1B00, size 0x8, align 8
    char _pad_1B08[0x8]; // offset 0x1B08
    int32 m_nMoveSpeed; // offset 0x1B10, size 0x4, align 4
    int32 m_nDisguisedSpeed; // offset 0x1B14, size 0x4, align 4
    ParticleIndex_t m_nDisguiseEffectIndex; // offset 0x1B18, size 0x4, align 255
    CHandle< CBaseEntity > m_hCourier; // offset 0x1B1C, size 0x4, align 4
    bool m_bIsFlyingCourier; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x7]; // offset 0x1B21
    char* s_pszDonkeyDisguise; // offset 0x1B28, size 0x8, align 8
    float32 invul_duration; // offset 0x1B30, size 0x4, align 4
    bool m_bParticlesSpawned; // offset 0x1B34, size 0x1, align 1
    char _pad_1B35[0x3]; // offset 0x1B35
};
