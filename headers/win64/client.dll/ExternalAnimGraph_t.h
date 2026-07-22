#pragma once

struct ExternalAnimGraph_t  // sizeof 0x38, align 0xFF (client)
{
    ExternalAnimGraphHandle_t m_hExtGraphHandle; // offset 0x0, size 0x4, align 255
    char _pad_0004[0x4]; // offset 0x4
    CGlobalSymbol m_sExternalGraphSlotID; // offset 0x8, size 0x8, align 8
    CStrongHandleCopyable< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinition; // offset 0x10, size 0x8, align 8
    CHandle< CBaseAnimGraph > m_hExternalGraphOwner; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x14]; // offset 0x1C
    ExternalAnimGraphInactiveBehavior_t m_nInactiveBehavior; // offset 0x30, size 0x1, align 1
    char _pad_0031[0x7]; // offset 0x31
};
