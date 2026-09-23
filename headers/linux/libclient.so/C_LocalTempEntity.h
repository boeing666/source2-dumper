#pragma once

class C_LocalTempEntity : public CBaseAnimGraph /*0x0*/  // sizeof 0x1298, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11F0]; // offset 0x0
    int32 flags; // offset 0x11F0, size 0x4, align 4 | MNotSaved
    GameTime_t die; // offset 0x11F4, size 0x4, align 255 | MNotSaved
    float32 m_flFrameMax; // offset 0x11F8, size 0x4, align 4 | MNotSaved
    float32 x; // offset 0x11FC, size 0x4, align 4 | MNotSaved
    float32 y; // offset 0x1200, size 0x4, align 4 | MNotSaved
    float32 fadeSpeed; // offset 0x1204, size 0x4, align 4 | MNotSaved
    float32 bounceFactor; // offset 0x1208, size 0x4, align 4 | MNotSaved
    int32 hitSound; // offset 0x120C, size 0x4, align 4 | MNotSaved
    int32 priority; // offset 0x1210, size 0x4, align 4 | MNotSaved
    Vector tentOffset; // offset 0x1214, size 0xC, align 4 | MNotSaved
    QAngle m_vecTempEntAngVelocity; // offset 0x1220, size 0xC, align 4 | MNotSaved
    int32 tempent_renderamt; // offset 0x122C, size 0x4, align 4 | MNotSaved
    Vector m_vecNormal; // offset 0x1230, size 0xC, align 4 | MNotSaved
    float32 m_flSpriteScale; // offset 0x123C, size 0x4, align 4 | MNotSaved
    int32 m_nFlickerFrame; // offset 0x1240, size 0x4, align 4 | MNotSaved
    float32 m_flFrameRate; // offset 0x1244, size 0x4, align 4 | MNotSaved
    float32 m_flFrame; // offset 0x1248, size 0x4, align 4 | MNotSaved
    char _pad_124C[0x4]; // offset 0x124C
    char* m_pszImpactEffect; // offset 0x1250, size 0x8, align 8 | MNotSaved
    char* m_pszParticleEffect; // offset 0x1258, size 0x8, align 8 | MNotSaved
    bool m_bParticleCollision; // offset 0x1260, size 0x1, align 1 | MNotSaved
    char _pad_1261[0x3]; // offset 0x1261
    int32 m_iLastCollisionFrame; // offset 0x1264, size 0x4, align 4 | MNotSaved
    VectorWS m_vLastCollisionOrigin; // offset 0x1268, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntVelocity; // offset 0x1274, size 0xC, align 4 | MNotSaved
    VectorWS m_vecPrevAbsOrigin; // offset 0x1280, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntAcceleration; // offset 0x128C, size 0xC, align 4 | MNotSaved
};
