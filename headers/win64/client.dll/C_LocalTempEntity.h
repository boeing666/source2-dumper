#pragma once

class C_LocalTempEntity : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xB68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAC0]; // offset 0x0
    int32 flags; // offset 0xAC0, size 0x4, align 4 | MNotSaved
    GameTime_t die; // offset 0xAC4, size 0x4, align 255 | MNotSaved
    float32 m_flFrameMax; // offset 0xAC8, size 0x4, align 4 | MNotSaved
    float32 x; // offset 0xACC, size 0x4, align 4 | MNotSaved
    float32 y; // offset 0xAD0, size 0x4, align 4 | MNotSaved
    float32 fadeSpeed; // offset 0xAD4, size 0x4, align 4 | MNotSaved
    float32 bounceFactor; // offset 0xAD8, size 0x4, align 4 | MNotSaved
    int32 hitSound; // offset 0xADC, size 0x4, align 4 | MNotSaved
    int32 priority; // offset 0xAE0, size 0x4, align 4 | MNotSaved
    Vector tentOffset; // offset 0xAE4, size 0xC, align 4 | MNotSaved
    QAngle m_vecTempEntAngVelocity; // offset 0xAF0, size 0xC, align 4 | MNotSaved
    int32 tempent_renderamt; // offset 0xAFC, size 0x4, align 4 | MNotSaved
    Vector m_vecNormal; // offset 0xB00, size 0xC, align 4 | MNotSaved
    float32 m_flSpriteScale; // offset 0xB0C, size 0x4, align 4 | MNotSaved
    int32 m_nFlickerFrame; // offset 0xB10, size 0x4, align 4 | MNotSaved
    float32 m_flFrameRate; // offset 0xB14, size 0x4, align 4 | MNotSaved
    float32 m_flFrame; // offset 0xB18, size 0x4, align 4 | MNotSaved
    char _pad_0B1C[0x4]; // offset 0xB1C
    char* m_pszImpactEffect; // offset 0xB20, size 0x8, align 8 | MNotSaved
    char* m_pszParticleEffect; // offset 0xB28, size 0x8, align 8 | MNotSaved
    bool m_bParticleCollision; // offset 0xB30, size 0x1, align 1 | MNotSaved
    char _pad_0B31[0x3]; // offset 0xB31
    int32 m_iLastCollisionFrame; // offset 0xB34, size 0x4, align 4 | MNotSaved
    VectorWS m_vLastCollisionOrigin; // offset 0xB38, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntVelocity; // offset 0xB44, size 0xC, align 4 | MNotSaved
    VectorWS m_vecPrevAbsOrigin; // offset 0xB50, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntAcceleration; // offset 0xB5C, size 0xC, align 4 | MNotSaved
};
