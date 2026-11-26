#pragma once

class CPropParadeFloatVData : public CCitadel_BreakablePropVData /*0x0*/  // sizeof 0x668, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x610]; // offset 0x0
    CSoundEventName m_sBulletHitSound; // offset 0x610, size 0x10, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    float32 m_flShotOffsetPerDamage; // offset 0x620, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    float32 m_flMaxShotOffset; // offset 0x624, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flMaxShotTilt; // offset 0x628, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flShotOffsetEaseInTime; // offset 0x62C, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flShotOffsetHalfLife; // offset 0x630, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    QAngle m_angSpawnAngles; // offset 0x634, size 0xC, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    float32 m_flTurnRate; // offset 0x640, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flMoveSpeed; // offset 0x644, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    int32 m_nZiplineLane; // offset 0x648, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flHeightAboveZipline; // offset 0x64C, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flRaiseHeight; // offset 0x650, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flRaiseSpeed; // offset 0x654, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flDistanceToEndRise; // offset 0x658, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flMaxRiseHeight; // offset 0x65C, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription MPropertySuppressExpr
    float32 m_flBoxFallbackZ; // offset 0x660, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    char _pad_0664[0x4]; // offset 0x664
};
