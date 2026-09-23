#pragma once

class C_LocalTempEntity : public CBaseAnimGraph /*0x0*/  // sizeof 0x1310, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1268]; // offset 0x0
    int32 flags; // offset 0x1268, size 0x4, align 4 | MNotSaved
    GameTime_t die; // offset 0x126C, size 0x4, align 255 | MNotSaved
    float32 m_flFrameMax; // offset 0x1270, size 0x4, align 4 | MNotSaved
    float32 x; // offset 0x1274, size 0x4, align 4 | MNotSaved
    float32 y; // offset 0x1278, size 0x4, align 4 | MNotSaved
    float32 fadeSpeed; // offset 0x127C, size 0x4, align 4 | MNotSaved
    float32 bounceFactor; // offset 0x1280, size 0x4, align 4 | MNotSaved
    int32 hitSound; // offset 0x1284, size 0x4, align 4 | MNotSaved
    int32 priority; // offset 0x1288, size 0x4, align 4 | MNotSaved
    Vector tentOffset; // offset 0x128C, size 0xC, align 4 | MNotSaved
    QAngle m_vecTempEntAngVelocity; // offset 0x1298, size 0xC, align 4 | MNotSaved
    int32 tempent_renderamt; // offset 0x12A4, size 0x4, align 4 | MNotSaved
    Vector m_vecNormal; // offset 0x12A8, size 0xC, align 4 | MNotSaved
    float32 m_flSpriteScale; // offset 0x12B4, size 0x4, align 4 | MNotSaved
    int32 m_nFlickerFrame; // offset 0x12B8, size 0x4, align 4 | MNotSaved
    float32 m_flFrameRate; // offset 0x12BC, size 0x4, align 4 | MNotSaved
    float32 m_flFrame; // offset 0x12C0, size 0x4, align 4 | MNotSaved
    char _pad_12C4[0x4]; // offset 0x12C4
    char* m_pszImpactEffect; // offset 0x12C8, size 0x8, align 8 | MNotSaved
    char* m_pszParticleEffect; // offset 0x12D0, size 0x8, align 8 | MNotSaved
    bool m_bParticleCollision; // offset 0x12D8, size 0x1, align 1 | MNotSaved
    char _pad_12D9[0x3]; // offset 0x12D9
    int32 m_iLastCollisionFrame; // offset 0x12DC, size 0x4, align 4 | MNotSaved
    VectorWS m_vLastCollisionOrigin; // offset 0x12E0, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntVelocity; // offset 0x12EC, size 0xC, align 4 | MNotSaved
    VectorWS m_vecPrevAbsOrigin; // offset 0x12F8, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntAcceleration; // offset 0x1304, size 0xC, align 4 | MNotSaved
};
