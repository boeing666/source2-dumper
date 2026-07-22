#pragma once

class CVMixToolGraph  // sizeof 0x48, align 0x8 (sounddoc_lib) {MGetKV3ClassDefaults}
{
public:
    CVMixGraphDescData m_graphDescData; // offset 0x0, size 0x10, align 8
    CUtlVector< CVMixEditorNode > m_editorNodes; // offset 0x10, size 0x18, align 8
    CUtlVector< CVMixEditorEdge > m_editorEdges; // offset 0x28, size 0x18, align 8
    int32 m_nPreviewNode; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
};
