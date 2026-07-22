#pragma once

class CRR_Response  // sizeof 0x1D0, align 0x8 (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    uint8 m_Type; // offset 0x0, size 0x1, align 1
    char[192] m_szResponseName; // offset 0x1, size 0xC0, align 1
    char[128] m_szMatchingRule; // offset 0xC1, size 0x80, align 1 | MNotSaved
    char _pad_0141[0x1F]; // offset 0x141
    ResponseParams m_Params; // offset 0x160, size 0x20, align 8
    float32 m_fMatchScore; // offset 0x180, size 0x4, align 4 | MNotSaved
    bool m_bAnyMatchingRulesInCooldown; // offset 0x184, size 0x1, align 1 | MNotSaved
    char _pad_0185[0x3]; // offset 0x185
    char* m_szSpeakerContext; // offset 0x188, size 0x8, align 8 | MNotSaved
    char* m_szWorldContext; // offset 0x190, size 0x8, align 8 | MNotSaved
    ResponseFollowup m_Followup; // offset 0x198, size 0x31, align 255 | MNotSaved
    char _pad_01C9[0x1]; // offset 0x1C9
    CUtlSymbol m_recipientFilter; // offset 0x1CA, size 0x2, align 2 | MNotSaved
    char _pad_01CC[0x4]; // offset 0x1CC
};
