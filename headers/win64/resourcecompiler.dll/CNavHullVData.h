#pragma once

class CNavHullVData  // sizeof 0x3C, align 0x4 [trivial_dtor] (navlib) {MVDataRoot MGetKV3ClassDefaults}
{
public:
    bool m_bAgentEnabled; // offset 0x0, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    char _pad_0001[0x3]; // offset 0x1
    float32 m_agentRadius; // offset 0x4, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_agentHeight; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    bool m_agentShortHeightEnabled; // offset 0xC, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    char _pad_000D[0x3]; // offset 0xD
    float32 m_agentShortHeight; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    bool m_agentCrawlEnabled; // offset 0x14, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    char _pad_0015[0x3]; // offset 0x15
    float32 m_agentCrawlHeight; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_agentMaxClimb; // offset 0x1C, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    int32 m_agentMaxSlope; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_agentMaxJumpDownDist; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_agentMaxJumpHorizDistBase; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_agentMaxJumpUpDist; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    int32 m_agentBorderErosion; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    bool m_flowMapGenerationEnabled; // offset 0x34, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    char _pad_0035[0x3]; // offset 0x35
    float32 m_flowMapNodeMaxRadius; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
};
