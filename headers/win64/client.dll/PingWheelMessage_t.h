#pragma once

struct PingWheelMessage_t  // sizeof 0xB8, align 0x8 (client) {MVDataRoot MGetKV3ClassDefaults}
{
    CUtlVector< PingWheelOptionID_t > m_vecSubnavMessageIDs; // offset 0x0, size 0x18, align 8 | MPropertySuppressField
    char _pad_0018[0x8]; // offset 0x18
    PingWheelOptionID_t m_unPingWheelOptionID; // offset 0x20, size 0x4, align 255 | MPropertyDescription MVDataUniqueMonotonicInt MPropertyAttributeEditor MPropertySuppressField
    CitadelPingWheelConcept_t m_ePingConcept; // offset 0x24, size 0x4, align 4 | MPropertyDescription
    ChatMsgPingMarkerInfo m_ePingMarkerInfo; // offset 0x28, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    ECitadelPingMessageRecipients_t m_eRecipientsType; // offset 0x2C, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    CMsgLaneColor m_eLaneColor; // offset 0x30, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    char _pad_0034[0x4]; // offset 0x34
    CUtlString m_strLabelToken; // offset 0x38, size 0x8, align 8 | MPropertyDescription
    CUtlString m_strMessageToken; // offset 0x40, size 0x8, align 8 | MPropertyDescription
    CUtlString m_strSound; // offset 0x48, size 0x8, align 8 | MPropertySuppressExpr MPropertyDescription
    CUtlString m_strIcon; // offset 0x50, size 0x8, align 8 | MPropertySuppressExpr MPropertyDescription
    ECitadelPingWheelSound_t m_ePingWheelSoundType; // offset 0x58, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    bool m_bIsSubnavMessage; // offset 0x5C, size 0x1, align 1 | MPropertyDescription
    char _pad_005D[0x3]; // offset 0x5D
    float32 m_flPhraseTopMarginOffset; // offset 0x60, size 0x4, align 4 | MPropertyDescription
    char _pad_0064[0x4]; // offset 0x64
    CUtlVector< CUtlString > m_vecSubnavMessageNames; // offset 0x68, size 0x18, align 8 | MPropertySuppressExpr MPropertyCustomFGDType MPropertyDescription
    CUtlVector< CitadelPingWheelConcept_t > m_vecRespondsToConcepts; // offset 0x80, size 0x18, align 8 | MPropertySuppressExpr MPropertyDescription
    bool m_bBindable; // offset 0x98, size 0x1, align 1 | MPropertyDescription
    bool m_bPingWheelBindable; // offset 0x99, size 0x1, align 1 | MPropertyDescription
    char _pad_009A[0x6]; // offset 0x9A
    CUtlVector< CUtlString > m_vecChatTextTriggers; // offset 0xA0, size 0x18, align 8 | MPropertyDescription
};
