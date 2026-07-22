#pragma once

class C_LocalTempEntity : public CBaseAnimGraph /*0x0*/  // sizeof 0xD50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    int32 flags; // offset 0xCA8, size 0x4, align 4 | MNotSaved
    GameTime_t die; // offset 0xCAC, size 0x4, align 255 | MNotSaved
    float32 m_flFrameMax; // offset 0xCB0, size 0x4, align 4 | MNotSaved
    float32 x; // offset 0xCB4, size 0x4, align 4 | MNotSaved
    float32 y; // offset 0xCB8, size 0x4, align 4 | MNotSaved
    float32 fadeSpeed; // offset 0xCBC, size 0x4, align 4 | MNotSaved
    float32 bounceFactor; // offset 0xCC0, size 0x4, align 4 | MNotSaved
    int32 hitSound; // offset 0xCC4, size 0x4, align 4 | MNotSaved
    int32 priority; // offset 0xCC8, size 0x4, align 4 | MNotSaved
    Vector tentOffset; // offset 0xCCC, size 0xC, align 4 | MNotSaved
    QAngle m_vecTempEntAngVelocity; // offset 0xCD8, size 0xC, align 4 | MNotSaved
    int32 tempent_renderamt; // offset 0xCE4, size 0x4, align 4 | MNotSaved
    Vector m_vecNormal; // offset 0xCE8, size 0xC, align 4 | MNotSaved
    float32 m_flSpriteScale; // offset 0xCF4, size 0x4, align 4 | MNotSaved
    int32 m_nFlickerFrame; // offset 0xCF8, size 0x4, align 4 | MNotSaved
    float32 m_flFrameRate; // offset 0xCFC, size 0x4, align 4 | MNotSaved
    float32 m_flFrame; // offset 0xD00, size 0x4, align 4 | MNotSaved
    char _pad_0D04[0x4]; // offset 0xD04
    char* m_pszImpactEffect; // offset 0xD08, size 0x8, align 8 | MNotSaved
    char* m_pszParticleEffect; // offset 0xD10, size 0x8, align 8 | MNotSaved
    bool m_bParticleCollision; // offset 0xD18, size 0x1, align 1 | MNotSaved
    char _pad_0D19[0x3]; // offset 0xD19
    int32 m_iLastCollisionFrame; // offset 0xD1C, size 0x4, align 4 | MNotSaved
    Vector m_vLastCollisionOrigin; // offset 0xD20, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntVelocity; // offset 0xD2C, size 0xC, align 4 | MNotSaved
    Vector m_vecPrevAbsOrigin; // offset 0xD38, size 0xC, align 4 | MNotSaved
    Vector m_vecTempEntAcceleration; // offset 0xD44, size 0xC, align 4 | MNotSaved
};
