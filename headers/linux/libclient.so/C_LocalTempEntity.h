#pragma once

class C_LocalTempEntity : public CBaseAnimGraph /*0x0*/  // sizeof 0x11B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1108]; // offset 0x0
    int32 flags; // offset 0x1108, size 0x4, align 4 | MNotSaved
    GameTime_t die; // offset 0x110C, size 0x4, align 255 | MNotSaved
    float32 m_flFrameMax; // offset 0x1110, size 0x4, align 4 | MNotSaved
    float32 x; // offset 0x1114, size 0x4, align 4 | MNotSaved
    float32 y; // offset 0x1118, size 0x4, align 4 | MNotSaved
    float32 fadeSpeed; // offset 0x111C, size 0x4, align 4 | MNotSaved
    float32 bounceFactor; // offset 0x1120, size 0x4, align 4 | MNotSaved
    int32 hitSound; // offset 0x1124, size 0x4, align 4 | MNotSaved
    int32 priority; // offset 0x1128, size 0x4, align 4 | MNotSaved
    Vector tentOffset; // offset 0x112C, size 0xC, align 4 | MNotSaved
    QAngle m_vecTempEntAngVelocity; // offset 0x1138, size 0xC, align 4 | MNotSaved
    int32 tempent_renderamt; // offset 0x1144, size 0x4, align 4 | MNotSaved
    Vector m_vecNormal; // offset 0x1148, size 0xC, align 4 | MNotSaved
    float32 m_flSpriteScale; // offset 0x1154, size 0x4, align 4 | MNotSaved
    int32 m_nFlickerFrame; // offset 0x1158, size 0x4, align 4 | MNotSaved
    float32 m_flFrameRate; // offset 0x115C, size 0x4, align 4 | MNotSaved
    float32 m_flFrame; // offset 0x1160, size 0x4, align 4 | MNotSaved
    char _pad_1164[0x4]; // offset 0x1164
    char* m_pszImpactEffect; // offset 0x1168, size 0x8, align 8 | MNotSaved
    char* m_pszParticleEffect; // offset 0x1170, size 0x8, align 8 | MNotSaved
    bool m_bParticleCollision; // offset 0x1178, size 0x1, align 1 | MNotSaved
    char _pad_1179[0x3]; // offset 0x1179
    int32 m_iLastCollisionFrame; // offset 0x117C, size 0x4, align 4 | MNotSaved
    VectorWS m_vLastCollisionOrigin; // offset 0x1180, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntVelocity; // offset 0x118C, size 0xC, align 4 | MNotSaved
    VectorWS m_vecPrevAbsOrigin; // offset 0x1198, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntAcceleration; // offset 0x11A4, size 0xC, align 4 | MNotSaved
};
