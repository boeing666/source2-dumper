#pragma once

struct FeMorphLayerDepr_t  // sizeof 0x90, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    CUtlString m_Name; // offset 0x0, size 0x8, align 8
    uint32 m_nNameHash; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< uint16 > m_Nodes; // offset 0x10, size 0x18, align 8
    CUtlVector< Vector > m_InitPos; // offset 0x28, size 0x18, align 8
    CUtlVector< float32 > m_Gravity; // offset 0x40, size 0x18, align 8
    CUtlVector< float32 > m_GoalStrength; // offset 0x58, size 0x18, align 8
    CUtlVector< float32 > m_GoalDamping; // offset 0x70, size 0x18, align 8
    uint32 m_nFlags; // offset 0x88, size 0x4, align 4
    char _pad_008C[0x4]; // offset 0x8C
};
