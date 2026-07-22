#pragma once

class CDOTACrateDropObjectDef  // sizeof 0xE0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    DOTACrateDropObjectDefID_t m_unID; // offset 0x10, size 0x4, align 255
    EDOTACrateDropObjectType m_eType; // offset 0x14, size 0x4, align 4
    CUtlString m_sParentName; // offset 0x18, size 0x8, align 8
    CUtlString m_sEntityClassName; // offset 0x20, size 0x8, align 8
    CUtlString m_sModel; // offset 0x28, size 0x8, align 8
    CUtlString m_sSearchEntity; // offset 0x30, size 0x8, align 8
    Vector m_vSpawnMin; // offset 0x38, size 0xC, align 4
    Vector m_vSpawnMax; // offset 0x44, size 0xC, align 4
    Vector m_vSpawnVelocityMin; // offset 0x50, size 0xC, align 4
    Vector m_vSpawnVelocityMax; // offset 0x5C, size 0xC, align 4
    float32 m_flFriction; // offset 0x68, size 0x4, align 4
    float32 m_flFrictionScale; // offset 0x6C, size 0x4, align 4
    float32 m_flGravityScale; // offset 0x70, size 0x4, align 4
    float32 m_flInertiaInv; // offset 0x74, size 0x4, align 4
    float32 m_flAcceleration; // offset 0x78, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0x7C, size 0x4, align 4
    int8 m_nMassPriority; // offset 0x80, size 0x1, align 1
    int8 m_nNoDraw; // offset 0x81, size 0x1, align 1
    char _pad_0082[0x2]; // offset 0x82
    float32 m_flMass; // offset 0x84, size 0x4, align 4
    float32 m_flScale; // offset 0x88, size 0x4, align 4
    float32 m_flTriggerDelay; // offset 0x8C, size 0x4, align 4
    float32 m_flTriggeredGravityScale; // offset 0x90, size 0x4, align 4
    float32 m_flFirstRowOffset; // offset 0x94, size 0x4, align 4
    float32 m_flSecondRowOffset; // offset 0x98, size 0x4, align 4
    float32 m_flAbilityCooldown; // offset 0x9C, size 0x4, align 4
    int8 m_nFirstRowWeight; // offset 0xA0, size 0x1, align 1
    int8 m_nSecondRowWeight; // offset 0xA1, size 0x1, align 1
    char _pad_00A2[0x2]; // offset 0xA2
    float32 m_flHeightVisualizationStep; // offset 0xA4, size 0x4, align 4
    float32 m_flMultiplierStep; // offset 0xA8, size 0x4, align 4
    float32 m_flMultiplierFactor; // offset 0xAC, size 0x4, align 4
    int8 m_nDisableSpawnRotation; // offset 0xB0, size 0x1, align 1
    int8 m_nTutorialObject; // offset 0xB1, size 0x1, align 1
    char _pad_00B2[0x6]; // offset 0xB2
    CUtlString m_sSpawnSound; // offset 0xB8, size 0x8, align 8
    CUtlString m_sLoopSound; // offset 0xC0, size 0x8, align 8
    CUtlString m_sDestroySound; // offset 0xC8, size 0x8, align 8
    CUtlString m_sCatchSound; // offset 0xD0, size 0x8, align 8
    char _pad_00D8[0x8]; // offset 0xD8
};
