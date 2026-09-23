#pragma once

class CVMixToolGraph  // sizeof 0x48, align 0x8 (sounddoc_lib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8 | MKV3TransferName
    int32 m_nGraphOutputChannels; // offset 0x8, size 0x4, align 4
    bool m_bIsMainGraph; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    int32 m_nPreviewNode; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CUtlVector< CVMixEditorNode > m_editorNodes; // offset 0x18, size 0x18, align 8 | MKV3TransferName
    CUtlVector< CVMixEditorEdge > m_editorEdges; // offset 0x30, size 0x18, align 8 | MKV3TransferName
};
