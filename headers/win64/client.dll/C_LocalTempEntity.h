#pragma once

class C_LocalTempEntity : public CBaseAnimGraph /*0x0*/  // sizeof 0xE48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    int32 flags; // offset 0xDA0, size 0x4, align 4 | MNotSaved
    GameTime_t die; // offset 0xDA4, size 0x4, align 255 | MNotSaved
    float32 m_flFrameMax; // offset 0xDA8, size 0x4, align 4 | MNotSaved
    float32 x; // offset 0xDAC, size 0x4, align 4 | MNotSaved
    float32 y; // offset 0xDB0, size 0x4, align 4 | MNotSaved
    float32 fadeSpeed; // offset 0xDB4, size 0x4, align 4 | MNotSaved
    float32 bounceFactor; // offset 0xDB8, size 0x4, align 4 | MNotSaved
    int32 hitSound; // offset 0xDBC, size 0x4, align 4 | MNotSaved
    int32 priority; // offset 0xDC0, size 0x4, align 4 | MNotSaved
    Vector tentOffset; // offset 0xDC4, size 0xC, align 4 | MNotSaved
    QAngle m_vecTempEntAngVelocity; // offset 0xDD0, size 0xC, align 4 | MNotSaved
    int32 tempent_renderamt; // offset 0xDDC, size 0x4, align 4 | MNotSaved
    Vector m_vecNormal; // offset 0xDE0, size 0xC, align 4 | MNotSaved
    float32 m_flSpriteScale; // offset 0xDEC, size 0x4, align 4 | MNotSaved
    int32 m_nFlickerFrame; // offset 0xDF0, size 0x4, align 4 | MNotSaved
    float32 m_flFrameRate; // offset 0xDF4, size 0x4, align 4 | MNotSaved
    float32 m_flFrame; // offset 0xDF8, size 0x4, align 4 | MNotSaved
    char _pad_0DFC[0x4]; // offset 0xDFC
    char* m_pszImpactEffect; // offset 0xE00, size 0x8, align 8 | MNotSaved
    char* m_pszParticleEffect; // offset 0xE08, size 0x8, align 8 | MNotSaved
    bool m_bParticleCollision; // offset 0xE10, size 0x1, align 1 | MNotSaved
    char _pad_0E11[0x3]; // offset 0xE11
    int32 m_iLastCollisionFrame; // offset 0xE14, size 0x4, align 4 | MNotSaved
    VectorWS m_vLastCollisionOrigin; // offset 0xE18, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntVelocity; // offset 0xE24, size 0xC, align 4 | MNotSaved
    VectorWS m_vecPrevAbsOrigin; // offset 0xE30, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntAcceleration; // offset 0xE3C, size 0xC, align 4 | MNotSaved
};
