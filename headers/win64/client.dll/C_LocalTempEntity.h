#pragma once

class C_LocalTempEntity : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xCB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    int32 flags; // offset 0xC10, size 0x4, align 4 | MNotSaved
    GameTime_t die; // offset 0xC14, size 0x4, align 255 | MNotSaved
    float32 m_flFrameMax; // offset 0xC18, size 0x4, align 4 | MNotSaved
    float32 x; // offset 0xC1C, size 0x4, align 4 | MNotSaved
    float32 y; // offset 0xC20, size 0x4, align 4 | MNotSaved
    float32 fadeSpeed; // offset 0xC24, size 0x4, align 4 | MNotSaved
    float32 bounceFactor; // offset 0xC28, size 0x4, align 4 | MNotSaved
    int32 hitSound; // offset 0xC2C, size 0x4, align 4 | MNotSaved
    int32 priority; // offset 0xC30, size 0x4, align 4 | MNotSaved
    Vector tentOffset; // offset 0xC34, size 0xC, align 4 | MNotSaved
    QAngle m_vecTempEntAngVelocity; // offset 0xC40, size 0xC, align 4 | MNotSaved
    int32 tempent_renderamt; // offset 0xC4C, size 0x4, align 4 | MNotSaved
    Vector m_vecNormal; // offset 0xC50, size 0xC, align 4 | MNotSaved
    float32 m_flSpriteScale; // offset 0xC5C, size 0x4, align 4 | MNotSaved
    int32 m_nFlickerFrame; // offset 0xC60, size 0x4, align 4 | MNotSaved
    float32 m_flFrameRate; // offset 0xC64, size 0x4, align 4 | MNotSaved
    float32 m_flFrame; // offset 0xC68, size 0x4, align 4 | MNotSaved
    char _pad_0C6C[0x4]; // offset 0xC6C
    char* m_pszImpactEffect; // offset 0xC70, size 0x8, align 8 | MNotSaved
    char* m_pszParticleEffect; // offset 0xC78, size 0x8, align 8 | MNotSaved
    bool m_bParticleCollision; // offset 0xC80, size 0x1, align 1 | MNotSaved
    char _pad_0C81[0x3]; // offset 0xC81
    int32 m_iLastCollisionFrame; // offset 0xC84, size 0x4, align 4 | MNotSaved
    VectorWS m_vLastCollisionOrigin; // offset 0xC88, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntVelocity; // offset 0xC94, size 0xC, align 4 | MNotSaved
    VectorWS m_vecPrevAbsOrigin; // offset 0xCA0, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntAcceleration; // offset 0xCAC, size 0xC, align 4 | MNotSaved
};
