#pragma once

class CDarkCarnivalCrateDropEntity : public C_PhysicsProp /*0x0*/  // sizeof 0xDD0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD40]; // offset 0x0
    DOTACrateDropObjectDefID_t m_unDefID; // offset 0xD40, size 0x4, align 255
    char _pad_0D44[0xC]; // offset 0xD44
    float32 m_flAcceleration; // offset 0xD50, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0xD54, size 0x4, align 4
    char _pad_0D58[0x14]; // offset 0xD58
    int8 m_nTutorialObject; // offset 0xD6C, size 0x1, align 1
    int8 m_nDisableSpawnRotation; // offset 0xD6D, size 0x1, align 1
    char _pad_0D6E[0x22]; // offset 0xD6E
    float32 m_flPoints; // offset 0xD90, size 0x4, align 4
    float32 m_flHazardExplosionRadius; // offset 0xD94, size 0x4, align 4
    float32 m_flExplosionStrength; // offset 0xD98, size 0x4, align 4
    float32 m_flUpkickExplosionStrength; // offset 0xD9C, size 0x4, align 4
    float32 m_flTriggerDelay; // offset 0xDA0, size 0x4, align 4
    float32 m_flTriggeredGravityScale; // offset 0xDA4, size 0x4, align 4
    bool m_bHasBeenTriggered; // offset 0xDA8, size 0x1, align 1
    bool m_bHazardDefused; // offset 0xDA9, size 0x1, align 1
    bool m_bCurrentlyActivated; // offset 0xDAA, size 0x1, align 1
    char _pad_0DAB[0x1]; // offset 0xDAB
    GameTime_t m_flNextPossibleTriggerTime; // offset 0xDAC, size 0x4, align 255
    GameTime_t m_flCreationTime; // offset 0xDB0, size 0x4, align 255
    char _pad_0DB4[0x4]; // offset 0xDB4
    CNewParticleEffect* pDropEffect; // offset 0xDB8, size 0x8, align 8
    bool m_bMarkedForDestroy; // offset 0xDC0, size 0x1, align 1
    bool m_bHazardRotationApplied; // offset 0xDC1, size 0x1, align 1
    char _pad_0DC2[0xE]; // offset 0xDC2
};
