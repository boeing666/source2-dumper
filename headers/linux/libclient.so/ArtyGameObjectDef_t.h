#pragma once

struct ArtyGameObjectDef_t  // sizeof 0xB0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot MVDataNodeType}
{
    char _pad_0000[0x10]; // offset 0x0
    ArtyGameObjectID_t m_unID; // offset 0x10, size 0x4, align 255
    char _pad_0014[0x4]; // offset 0x14
    CUtlString m_szGraphicsDef; // offset 0x18, size 0x8, align 8 | MPropertyCustomFGDType
    char _pad_0020[0x8]; // offset 0x20
    CUtlString m_szDeathSound; // offset 0x28, size 0x8, align 8
    EArtyHitboxType m_eHitboxType; // offset 0x30, size 0x1, align 1
    char _pad_0031[0x3]; // offset 0x31
    Vector2D m_vHitboxMin; // offset 0x34, size 0x8, align 4
    Vector2D m_vHitboxMax; // offset 0x3C, size 0x8, align 4
    float32 m_flHitboxRadius; // offset 0x44, size 0x4, align 4
    float32 m_flHitboxExtents; // offset 0x48, size 0x4, align 4
    bool m_bInheritTransform; // offset 0x4C, size 0x1, align 1
    bool m_bInheritRotation; // offset 0x4D, size 0x1, align 1
    bool m_bInheritVisibility; // offset 0x4E, size 0x1, align 1
    bool m_bInheritState; // offset 0x4F, size 0x1, align 1
    bool m_bDestroyOnFallThrough; // offset 0x50, size 0x1, align 1
    char _pad_0051[0x3]; // offset 0x51
    float32 m_flFallDamagePerVelocity; // offset 0x54, size 0x4, align 4
    bool m_bDeathCausesExplosion; // offset 0x58, size 0x1, align 1
    char _pad_0059[0x3]; // offset 0x59
    float32 m_flExplosionDamage; // offset 0x5C, size 0x4, align 4
    float32 m_flExplosionRadius; // offset 0x60, size 0x4, align 4
    float32 m_flExplosionTerrainRadius; // offset 0x64, size 0x4, align 4
    float32 m_flGravityMult; // offset 0x68, size 0x4, align 4
    float32 m_flDragMult; // offset 0x6C, size 0x4, align 4
    float32 m_flWindMult; // offset 0x70, size 0x4, align 4
    float32 m_flDeathMaxScaleFactor; // offset 0x74, size 0x4, align 4
    bool m_bAllowPhysicsInDying; // offset 0x78, size 0x1, align 1
    EArtyGameObjectType m_eType; // offset 0x79, size 0x1, align 1
    char _pad_007A[0x2]; // offset 0x7A
    EArtyLayer m_eLayer; // offset 0x7C, size 0x4, align 4
    float32 m_flMaxHealth; // offset 0x80, size 0x4, align 4
    float32 m_flHealth; // offset 0x84, size 0x4, align 4
    bool m_bVisible; // offset 0x88, size 0x1, align 1
    bool m_bCanCollide; // offset 0x89, size 0x1, align 1
    bool m_bDoPhysics; // offset 0x8A, size 0x1, align 1
    char _pad_008B[0x1]; // offset 0x8B
    float32 m_flLifetime; // offset 0x8C, size 0x4, align 4
    float32 m_flDieTime; // offset 0x90, size 0x4, align 4
    char _pad_0094[0x4]; // offset 0x94
    CUtlVector< ArtyGameObjectInstance_t > m_vecChildren; // offset 0x98, size 0x18, align 8
};
