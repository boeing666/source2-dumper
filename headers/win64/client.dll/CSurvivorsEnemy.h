#pragma once

class CSurvivorsEnemy : public CSurvivorsUnit /*0x0*/  // sizeof 0x338, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x180]; // offset 0x0
    GameActivity_t m_activity; // offset 0x180, size 0x4, align 4
    char _pad_0184[0x4]; // offset 0x184
    CSurvivorsSpawner* m_pSpawner; // offset 0x188, size 0x8, align 8
    SurvivorsEnemyID_t m_enemyID; // offset 0x190, size 0x4, align 255
    bool m_bIsDying; // offset 0x194, size 0x1, align 1
    char _pad_0195[0x3]; // offset 0x195
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sDeathEffectParticle; // offset 0x198, size 0xE0, align 8
    bool m_bSpawnPickupsOnDeath; // offset 0x278, size 0x1, align 1
    char _pad_0279[0x3]; // offset 0x279
    float32 m_flRunPlaybackRate; // offset 0x27C, size 0x4, align 4
    float32 m_flIdlePlaybackRate; // offset 0x280, size 0x4, align 4
    float32 m_flTurnRate; // offset 0x284, size 0x4, align 4
    float32 m_flCollisionRadius; // offset 0x288, size 0x4, align 4
    int32 m_nSeperationTickCounter; // offset 0x28C, size 0x4, align 4
    char _pad_0290[0x30]; // offset 0x290
    int32 m_nCurrentAttackIndex; // offset 0x2C0, size 0x4, align 4
    float32 m_flTouchDamage; // offset 0x2C4, size 0x4, align 4
    float32 m_flTouchTimeout; // offset 0x2C8, size 0x4, align 4
    float32 m_flTouchCooldown; // offset 0x2CC, size 0x4, align 4
    bool m_bDieOnTouch; // offset 0x2D0, size 0x1, align 1
    char _pad_02D1[0x3]; // offset 0x2D1
    float32 m_flDespawnTimer; // offset 0x2D4, size 0x4, align 4
    bool m_bTryDespawn; // offset 0x2D8, size 0x1, align 1
    char _pad_02D9[0x3]; // offset 0x2D9
    ESurvivorsEnemyMovementBehavior m_eMovementBehavior; // offset 0x2DC, size 0x4, align 4
    ESurvivorsEnemyMovementCapability m_eMovementCapability; // offset 0x2E0, size 0x4, align 4
    Vector2D m_vOriginalFacing; // offset 0x2E4, size 0x8, align 4
    float32 m_flSinTurnTimer; // offset 0x2EC, size 0x4, align 4
    float32 m_flDeathEffectTimer; // offset 0x2F0, size 0x4, align 4
    Vector m_vDeathAnimationDirection; // offset 0x2F4, size 0xC, align 4
    char _pad_0300[0x8]; // offset 0x300
    Vector m_vCurrentSeparationVelocity; // offset 0x308, size 0xC, align 4
    char _pad_0314[0xC]; // offset 0x314
    bool m_bCenterRooted; // offset 0x320, size 0x1, align 1
    bool m_bRotates; // offset 0x321, size 0x1, align 1
    bool m_bIsElite; // offset 0x322, size 0x1, align 1
    bool m_bIsMiniboss; // offset 0x323, size 0x1, align 1
    float32 m_flSpawnerExpirationTime; // offset 0x324, size 0x4, align 4
    float32 m_flOverrideDespawnRadiusBuffer; // offset 0x328, size 0x4, align 4
    Vector m_vSeparationVector; // offset 0x32C, size 0xC, align 4
};
