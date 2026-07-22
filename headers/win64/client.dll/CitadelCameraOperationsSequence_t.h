#pragma once

struct CitadelCameraOperationsSequence_t  // sizeof 0x88, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlStringToken m_strToken; // offset 0x0, size 0x4, align 4 | MPropertySuppressField
    bool m_bIsEmpty; // offset 0x4, size 0x1, align 1 | MPropertySuppressField
    char _pad_0005[0x3]; // offset 0x5
    int32 m_nPriority; // offset 0x8, size 0x4, align 4 | MPropertyDescription
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< CitadelCameraDistanceOperationDef_t > m_vecDistanceOperations; // offset 0x10, size 0x18, align 8
    CUtlVector< CitadelCameraFOVOperationDef_t > m_vecFOVOperations; // offset 0x28, size 0x18, align 8
    CUtlVector< CitadelCameraTargetPosOperationDef_t > m_vecTargetPosOperations; // offset 0x40, size 0x18, align 8
    CUtlVector< CitadelCameraVertOffsetOperationDef_t > m_vecVertOffsetOperations; // offset 0x58, size 0x18, align 8
    CUtlVector< CitadelCameraHorizOffsetOperationDef_t > m_vecHorizOffsetOperations; // offset 0x70, size 0x18, align 8
};
