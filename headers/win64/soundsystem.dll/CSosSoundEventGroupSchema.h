#pragma once

class CSosSoundEventGroupSchema  // sizeof 0x70, align 0x8 (soundsystem) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    SosGroupType_t m_nGroupType; // offset 0x8, size 0x4, align 4 | MPropertyAttributeEditor
    bool m_bBlocksEvents; // offset 0xC, size 0x1, align 1 | MPropertyStartGroup
    char _pad_000D[0x3]; // offset 0xD
    int32 m_nBlockMaxCount; // offset 0x10, size 0x4, align 4 | MPropertyReadonlyExpr
    float32 m_flMemberLifespanTime; // offset 0x14, size 0x4, align 4 | MPropertyStartGroup
    bool m_bInvertMatch; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x3]; // offset 0x19
    SosGroupFieldBehavior_t m_Behavior_EventName; // offset 0x1C, size 0x4, align 4 | MPropertyStartGroup MPropertyAttributeEditor MPropertyReadonlyExpr
    CUtlString m_matchSoundEventName; // offset 0x20, size 0x8, align 8 | MPropertyReadonlyExpr
    bool m_bMatchEventSubString; // offset 0x28, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0029[0x7]; // offset 0x29
    CUtlString m_matchSoundEventSubString; // offset 0x30, size 0x8, align 8 | MPropertyReadonlyExpr
    SosGroupFieldBehavior_t m_Behavior_EntIndex; // offset 0x38, size 0x4, align 4 | MPropertyStartGroup MPropertyAttributeEditor
    float32 m_flEntIndex; // offset 0x3C, size 0x4, align 4 | MPropertyReadonlyExpr
    SosGroupFieldBehavior_t m_Behavior_Opvar; // offset 0x40, size 0x4, align 4 | MPropertyStartGroup MPropertySuppressExpr MPropertyAttributeEditor
    float32 m_flOpvar; // offset 0x44, size 0x4, align 4 | MPropertyReadonlyExpr MPropertySuppressExpr
    SosGroupFieldBehavior_t m_Behavior_String; // offset 0x48, size 0x4, align 4 | MPropertyStartGroup MPropertySuppressExpr MPropertyAttributeEditor
    char _pad_004C[0x4]; // offset 0x4C
    CUtlString m_opvarString; // offset 0x50, size 0x8, align 8 | MPropertyReadonlyExpr MPropertySuppressExpr
    CUtlVector< CSosGroupActionSchema* > m_vActions; // offset 0x58, size 0x18, align 8 | MPropertyStartGroup MPropertyAutoExpandSelf
};
