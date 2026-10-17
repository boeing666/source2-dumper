#pragma once

class C_LocalTempEntity : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    int32 flags; // offset 0xBB0, size 0x4, align 4 | MNotSaved
    GameTime_t die; // offset 0xBB4, size 0x4, align 255 | MNotSaved
    float32 m_flFrameMax; // offset 0xBB8, size 0x4, align 4 | MNotSaved
    float32 x; // offset 0xBBC, size 0x4, align 4 | MNotSaved
    float32 y; // offset 0xBC0, size 0x4, align 4 | MNotSaved
    float32 fadeSpeed; // offset 0xBC4, size 0x4, align 4 | MNotSaved
    float32 bounceFactor; // offset 0xBC8, size 0x4, align 4 | MNotSaved
    int32 hitSound; // offset 0xBCC, size 0x4, align 4 | MNotSaved
    int32 priority; // offset 0xBD0, size 0x4, align 4 | MNotSaved
    Vector tentOffset; // offset 0xBD4, size 0xC, align 4 | MNotSaved
    QAngle m_vecTempEntAngVelocity; // offset 0xBE0, size 0xC, align 4 | MNotSaved
    int32 tempent_renderamt; // offset 0xBEC, size 0x4, align 4 | MNotSaved
    Vector m_vecNormal; // offset 0xBF0, size 0xC, align 4 | MNotSaved
    float32 m_flSpriteScale; // offset 0xBFC, size 0x4, align 4 | MNotSaved
    int32 m_nFlickerFrame; // offset 0xC00, size 0x4, align 4 | MNotSaved
    float32 m_flFrameRate; // offset 0xC04, size 0x4, align 4 | MNotSaved
    float32 m_flFrame; // offset 0xC08, size 0x4, align 4 | MNotSaved
    char _pad_0C0C[0x4]; // offset 0xC0C
    char* m_pszImpactEffect; // offset 0xC10, size 0x8, align 8 | MNotSaved
    char* m_pszParticleEffect; // offset 0xC18, size 0x8, align 8 | MNotSaved
    bool m_bParticleCollision; // offset 0xC20, size 0x1, align 1 | MNotSaved
    char _pad_0C21[0x3]; // offset 0xC21
    int32 m_iLastCollisionFrame; // offset 0xC24, size 0x4, align 4 | MNotSaved
    VectorWS m_vLastCollisionOrigin; // offset 0xC28, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntVelocity; // offset 0xC34, size 0xC, align 4 | MNotSaved
    VectorWS m_vecPrevAbsOrigin; // offset 0xC40, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntAcceleration; // offset 0xC4C, size 0xC, align 4 | MNotSaved
};
