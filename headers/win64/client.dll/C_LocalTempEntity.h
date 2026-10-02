#pragma once

class C_LocalTempEntity : public CBaseAnimGraph /*0x0*/  // sizeof 0xEA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    int32 flags; // offset 0xDF8, size 0x4, align 4 | MNotSaved
    GameTime_t die; // offset 0xDFC, size 0x4, align 255 | MNotSaved
    float32 m_flFrameMax; // offset 0xE00, size 0x4, align 4 | MNotSaved
    float32 x; // offset 0xE04, size 0x4, align 4 | MNotSaved
    float32 y; // offset 0xE08, size 0x4, align 4 | MNotSaved
    float32 fadeSpeed; // offset 0xE0C, size 0x4, align 4 | MNotSaved
    float32 bounceFactor; // offset 0xE10, size 0x4, align 4 | MNotSaved
    int32 hitSound; // offset 0xE14, size 0x4, align 4 | MNotSaved
    int32 priority; // offset 0xE18, size 0x4, align 4 | MNotSaved
    Vector tentOffset; // offset 0xE1C, size 0xC, align 4 | MNotSaved
    QAngle m_vecTempEntAngVelocity; // offset 0xE28, size 0xC, align 4 | MNotSaved
    int32 tempent_renderamt; // offset 0xE34, size 0x4, align 4 | MNotSaved
    Vector m_vecNormal; // offset 0xE38, size 0xC, align 4 | MNotSaved
    float32 m_flSpriteScale; // offset 0xE44, size 0x4, align 4 | MNotSaved
    int32 m_nFlickerFrame; // offset 0xE48, size 0x4, align 4 | MNotSaved
    float32 m_flFrameRate; // offset 0xE4C, size 0x4, align 4 | MNotSaved
    float32 m_flFrame; // offset 0xE50, size 0x4, align 4 | MNotSaved
    char _pad_0E54[0x4]; // offset 0xE54
    char* m_pszImpactEffect; // offset 0xE58, size 0x8, align 8 | MNotSaved
    char* m_pszParticleEffect; // offset 0xE60, size 0x8, align 8 | MNotSaved
    bool m_bParticleCollision; // offset 0xE68, size 0x1, align 1 | MNotSaved
    char _pad_0E69[0x3]; // offset 0xE69
    int32 m_iLastCollisionFrame; // offset 0xE6C, size 0x4, align 4 | MNotSaved
    VectorWS m_vLastCollisionOrigin; // offset 0xE70, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntVelocity; // offset 0xE7C, size 0xC, align 4 | MNotSaved
    VectorWS m_vecPrevAbsOrigin; // offset 0xE88, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntAcceleration; // offset 0xE94, size 0xC, align 4 | MNotSaved
};
