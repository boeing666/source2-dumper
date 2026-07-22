#pragma once

struct FantasyCraftSetupData_t  // sizeof 0xB8, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    FantasyCraftDataID_t m_unID; // offset 0x0, size 0x2, align 255 | MPropertyDescription
    char _pad_0002[0x6]; // offset 0x2
    CUtlVector< FantasyCraftingTitleData_t > m_vecPrefixes; // offset 0x8, size 0x18, align 8
    CUtlVector< FantasyCraftingTitleData_t > m_vecSuffixes; // offset 0x20, size 0x18, align 8
    CUtlVector< FantasyCraftingGemData_t > m_vecGems; // offset 0x38, size 0x18, align 8
    CUtlVector< FantasyCraftingShapeData_t > m_vecShapes; // offset 0x50, size 0x18, align 8
    CUtlVector< FantasyCraftingQualityData_t > m_vecQualities; // offset 0x68, size 0x18, align 8
    CUtlVector< FantasyCraftingTabletData_t > m_vecTablets; // offset 0x80, size 0x18, align 8
    CUtlVector< FantasyCraftOperationBucket_t > m_vecOperations; // offset 0x98, size 0x18, align 8
    char _pad_00B0[0x8]; // offset 0xB0
};
