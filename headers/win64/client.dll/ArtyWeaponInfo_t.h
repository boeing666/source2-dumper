#pragma once

struct ArtyWeaponInfo_t  // sizeof 0x110, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
    char _pad_0000[0x8]; // offset 0x0
    ArtyWeaponID_t m_unID; // offset 0x8, size 0x4, align 255
    char _pad_000C[0x4]; // offset 0xC
    CUtlString m_sWeaponLocName; // offset 0x10, size 0x8, align 8
    CUtlString m_sWeaponLocDesc; // offset 0x18, size 0x8, align 8
    CUtlString m_sWeaponSwapSound; // offset 0x20, size 0x8, align 8
    CUtlString m_sWeaponFireSound; // offset 0x28, size 0x8, align 8
    CPanoramaImageName m_sWeaponImage; // offset 0x30, size 0x10, align 8
    bool m_bIsPlayerWeapon; // offset 0x40, size 0x1, align 1
    char _pad_0041[0x7]; // offset 0x41
    CUtlString m_strGraphicInfoName; // offset 0x48, size 0x8, align 8 | MPropertyCustomFGDType
    char _pad_0050[0x4]; // offset 0x50
    GameActivity_t m_weaponAttackActivity; // offset 0x54, size 0x4, align 4
    float32 m_flShotCreationTime; // offset 0x58, size 0x4, align 4
    float32 m_flDamage; // offset 0x5C, size 0x4, align 4
    float32 m_flHitRadius; // offset 0x60, size 0x4, align 4
    float32 m_flTerrainCarveRadius; // offset 0x64, size 0x4, align 4
    float32 m_flDamageRadius; // offset 0x68, size 0x4, align 4
    float32 m_flLockedAngle; // offset 0x6C, size 0x4, align 4
    float32 m_flLockedPower; // offset 0x70, size 0x4, align 4
    float32 m_flReloadTime; // offset 0x74, size 0x4, align 4
    int32 m_nSplitCount; // offset 0x78, size 0x4, align 4
    float32 m_flSplitTime; // offset 0x7C, size 0x4, align 4
    float32 m_flSplitRepeatTime; // offset 0x80, size 0x4, align 4
    float32 m_flSplitDispersion; // offset 0x84, size 0x4, align 4
    bool m_bSplitAtTop; // offset 0x88, size 0x1, align 1
    bool m_bZeroXOnSplit; // offset 0x89, size 0x1, align 1
    bool m_bSplitRepeats; // offset 0x8A, size 0x1, align 1
    char _pad_008B[0x5]; // offset 0x8B
    CUtlString m_szSplitWeapon; // offset 0x90, size 0x8, align 8
    char _pad_0098[0x4]; // offset 0x98
    float32 m_flMaxSpeed; // offset 0x9C, size 0x4, align 4
    float32 m_flDragMult; // offset 0xA0, size 0x4, align 4
    float32 m_flWindMult; // offset 0xA4, size 0x4, align 4
    bool m_bIsRay; // offset 0xA8, size 0x1, align 1
    char _pad_00A9[0x3]; // offset 0xA9
    float32 m_flRangeMult; // offset 0xAC, size 0x4, align 4
    int32 m_nInitialShotCount; // offset 0xB0, size 0x4, align 4
    float32 m_nInitialShotAngleDispersionPer; // offset 0xB4, size 0x4, align 4
    float32 m_flManaCost; // offset 0xB8, size 0x4, align 4
    bool m_bDisabled; // offset 0xBC, size 0x1, align 1
    bool m_bBounces; // offset 0xBD, size 0x1, align 1
    bool m_bBounceOffTarget; // offset 0xBE, size 0x1, align 1
    char _pad_00BF[0x1]; // offset 0xBF
    float32 m_flFuseTime; // offset 0xC0, size 0x4, align 4
    float32 m_flBounceDrag; // offset 0xC4, size 0x4, align 4
    int32 m_nMaxReloads; // offset 0xC8, size 0x4, align 4
    float32 m_flGravityMult; // offset 0xCC, size 0x4, align 4
    bool m_bProximityFuse; // offset 0xD0, size 0x1, align 1
    bool m_bUseHighArc; // offset 0xD1, size 0x1, align 1
    bool m_bCollides; // offset 0xD2, size 0x1, align 1
    bool m_bDirectAimAtTarget; // offset 0xD3, size 0x1, align 1
    int32 m_nWeaponPoints; // offset 0xD4, size 0x4, align 4
    int32 m_nRayDigTimes; // offset 0xD8, size 0x4, align 4
    bool m_bNoShootingWhileInAir; // offset 0xDC, size 0x1, align 1
    bool m_bListenForKeypress; // offset 0xDD, size 0x1, align 1
    char _pad_00DE[0x2]; // offset 0xDE
    Vector2D m_vVelocityMultOnKeypress; // offset 0xE0, size 0x8, align 4
    Vector2D m_vVelocityOffsetOnKeypress; // offset 0xE8, size 0x8, align 4
    bool m_bShowTrajectory; // offset 0xF0, size 0x1, align 1
    char _pad_00F1[0x3]; // offset 0xF1
    Vector2D m_vVelocityMultOnExplode; // offset 0xF4, size 0x8, align 4
    Vector2D m_vVelocityOffsetOnExplode; // offset 0xFC, size 0x8, align 4
    int32 m_nExplodeTimes; // offset 0x104, size 0x4, align 4
    float32 m_flRadiusChangePerExplode; // offset 0x108, size 0x4, align 4
    char _pad_010C[0x4]; // offset 0x10C
};
