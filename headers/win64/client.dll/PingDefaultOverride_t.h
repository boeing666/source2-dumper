#pragma once

struct PingDefaultOverride_t  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults}
{
    PingConditions_t m_when; // offset 0x0, size 0x30, align 8 | MPropertyDescription
    CitadelPingWheelConcept_t m_eConcept; // offset 0x30, size 0x4, align 4 | MPropertyDescription
    char _pad_0034[0x4]; // offset 0x34
};
