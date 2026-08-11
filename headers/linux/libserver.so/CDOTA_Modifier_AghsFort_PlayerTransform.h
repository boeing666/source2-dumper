#pragma once

class CDOTA_Modifier_AghsFort_PlayerTransform : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    itemid_t m_nCourierItemId; // offset 0x1A78, size 0x8, align 255
    CUtlString m_ModelNameOfDisguise; // offset 0x1A80, size 0x8, align 8
    char _pad_1A88[0x8]; // offset 0x1A88
    int32 m_nMoveSpeed; // offset 0x1A90, size 0x4, align 4
    int32 m_nDisguisedSpeed; // offset 0x1A94, size 0x4, align 4
    ParticleIndex_t m_nDisguiseEffectIndex; // offset 0x1A98, size 0x4, align 255
    CHandle< CBaseEntity > m_hCourier; // offset 0x1A9C, size 0x4, align 4
    bool m_bIsFlyingCourier; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x7]; // offset 0x1AA1
    char* s_pszDonkeyDisguise; // offset 0x1AA8, size 0x8, align 8
    float32 invul_duration; // offset 0x1AB0, size 0x4, align 4
    bool m_bParticlesSpawned; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
};
