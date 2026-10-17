#pragma once

class C_LocalTempEntity : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xDD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD34]; // offset 0x0
    int32 flags; // offset 0xD34, size 0x4, align 4 | MNotSaved
    GameTime_t die; // offset 0xD38, size 0x4, align 255 | MNotSaved
    float32 m_flFrameMax; // offset 0xD3C, size 0x4, align 4 | MNotSaved
    float32 x; // offset 0xD40, size 0x4, align 4 | MNotSaved
    float32 y; // offset 0xD44, size 0x4, align 4 | MNotSaved
    float32 fadeSpeed; // offset 0xD48, size 0x4, align 4 | MNotSaved
    float32 bounceFactor; // offset 0xD4C, size 0x4, align 4 | MNotSaved
    int32 hitSound; // offset 0xD50, size 0x4, align 4 | MNotSaved
    int32 priority; // offset 0xD54, size 0x4, align 4 | MNotSaved
    Vector tentOffset; // offset 0xD58, size 0xC, align 4 | MNotSaved
    QAngle m_vecTempEntAngVelocity; // offset 0xD64, size 0xC, align 4 | MNotSaved
    int32 tempent_renderamt; // offset 0xD70, size 0x4, align 4 | MNotSaved
    Vector m_vecNormal; // offset 0xD74, size 0xC, align 4 | MNotSaved
    float32 m_flSpriteScale; // offset 0xD80, size 0x4, align 4 | MNotSaved
    int32 m_nFlickerFrame; // offset 0xD84, size 0x4, align 4 | MNotSaved
    float32 m_flFrameRate; // offset 0xD88, size 0x4, align 4 | MNotSaved
    float32 m_flFrame; // offset 0xD8C, size 0x4, align 4 | MNotSaved
    char* m_pszImpactEffect; // offset 0xD90, size 0x8, align 8 | MNotSaved
    char* m_pszParticleEffect; // offset 0xD98, size 0x8, align 8 | MNotSaved
    bool m_bParticleCollision; // offset 0xDA0, size 0x1, align 1 | MNotSaved
    char _pad_0DA1[0x3]; // offset 0xDA1
    int32 m_iLastCollisionFrame; // offset 0xDA4, size 0x4, align 4 | MNotSaved
    VectorWS m_vLastCollisionOrigin; // offset 0xDA8, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntVelocity; // offset 0xDB4, size 0xC, align 4 | MNotSaved
    VectorWS m_vecPrevAbsOrigin; // offset 0xDC0, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntAcceleration; // offset 0xDCC, size 0xC, align 4 | MNotSaved
};
