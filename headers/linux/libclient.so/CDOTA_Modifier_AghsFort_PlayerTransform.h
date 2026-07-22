#pragma once

class CDOTA_Modifier_AghsFort_PlayerTransform : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    itemid_t m_nCourierItemId; // offset 0x1A58, size 0x8, align 255
    CUtlString m_ModelNameOfDisguise; // offset 0x1A60, size 0x8, align 8
    char _pad_1A68[0x8]; // offset 0x1A68
    int32 m_nMoveSpeed; // offset 0x1A70, size 0x4, align 4
    int32 m_nDisguisedSpeed; // offset 0x1A74, size 0x4, align 4
    ParticleIndex_t m_nDisguiseEffectIndex; // offset 0x1A78, size 0x4, align 255
    CHandle< C_BaseEntity > m_hCourier; // offset 0x1A7C, size 0x4, align 4
    bool m_bIsFlyingCourier; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x7]; // offset 0x1A81
    char* s_pszDonkeyDisguise; // offset 0x1A88, size 0x8, align 8
    float32 invul_duration; // offset 0x1A90, size 0x4, align 4
    bool m_bParticlesSpawned; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
};
