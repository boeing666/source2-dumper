#pragma once

struct PingTargetDef_t  // sizeof 0x138, align 0x8 (client) {MVDataRoot MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    PingTargetMatch_t m_match; // offset 0x8, size 0x40, align 8 | MPropertyDescription
    CitadelPingWheelConcept_t m_eDefaultConcept; // offset 0x48, size 0x4, align 4 | MPropertyDescription
    char _pad_004C[0x4]; // offset 0x4C
    CUtlVector< PingDefaultOverride_t > m_vecDefaultOverrides; // offset 0x50, size 0x18, align 8 | MPropertyDescription
    PingSlotDef_t m_SlotNorth; // offset 0x68, size 0x30, align 8 | MPropertyDescription
    PingSlotDef_t m_SlotEast; // offset 0x98, size 0x30, align 8 | MPropertyDescription
    PingSlotDef_t m_SlotSouth; // offset 0xC8, size 0x30, align 8 | MPropertyDescription
    PingSlotDef_t m_SlotWest; // offset 0xF8, size 0x30, align 8 | MPropertyDescription
    CUtlString m_strSubjectNameToken; // offset 0x128, size 0x8, align 8 | MPropertyDescription
    CUtlString m_strSubjectIcon; // offset 0x130, size 0x8, align 8 | MPropertyDescription
};
