xof 0303txt 0032
template XSkinMeshHeader {
 <3cf169ce-ff7c-44ab-93c0-f78f62d172e2>
 WORD nMaxSkinWeightsPerVertex;
 WORD nMaxSkinWeightsPerFace;
 WORD nBones;
}

template VertexDuplicationIndices {
 <b8d65549-d7c9-4995-89cf-53a9a8b031e3>
 DWORD nIndices;
 DWORD nOriginalVertices;
 array DWORD indices[nIndices];
}

template SkinWeights {
 <6f0d123b-bad2-4167-a0d0-80224f25fabb>
 STRING transformNodeName;
 DWORD nWeights;
 array DWORD vertexIndices[nWeights];
 array FLOAT weights[nWeights];
 Matrix4x4 matrixOffset;
}

template AnimTicksPerSecond {
 <9e415a43-7ba6-4a73-8743-b73d47e88476>
 DWORD AnimTicksPerSecond;
}


AnimTicksPerSecond {
 24;
}

Frame World {
 

 FrameTransformMatrix {
  1.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,1.000000;;
 }
}

Mesh Mesh {
 164;
 11.000000;0.000000;-4.000000;,
 11.000000;0.000000;0.000000;,
 10.461600;3.399200;0.000000;,
 10.461600;3.399200;-4.000000;,
 8.899200;6.465600;0.000000;,
 8.899200;6.465600;-4.000000;,
 6.465600;8.899200;0.000000;,
 6.465600;8.899200;-4.000000;,
 3.399200;10.461600;0.000000;,
 3.399200;10.461600;-4.000000;,
 0.000000;11.000000;0.000000;,
 0.000000;11.000000;-4.000000;,
 -3.399200;10.461600;0.000000;,
 -3.399200;10.461600;-4.000000;,
 -6.465600;8.899200;0.000000;,
 -6.465600;8.899200;-4.000000;,
 -8.899200;6.465600;0.000000;,
 -8.899200;6.465600;-4.000000;,
 -10.461600;3.399200;0.000000;,
 -10.461600;3.399200;-4.000000;,
 -11.000000;0.000000;0.000000;,
 -11.000000;0.000000;-4.000000;,
 -10.461600;-3.399200;0.000000;,
 -10.461600;-3.399200;-4.000000;,
 -8.899200;-6.465600;0.000000;,
 -8.899200;-6.465600;-4.000000;,
 -6.465600;-8.899200;0.000000;,
 -6.465600;-8.899200;-4.000000;,
 -3.399200;-10.461600;0.000000;,
 -3.399200;-10.461600;-4.000000;,
 0.000000;-11.000000;0.000000;,
 0.000000;-11.000000;-4.000000;,
 3.399200;-10.461600;0.000000;,
 3.399200;-10.461600;-4.000000;,
 6.465600;-8.899200;0.000000;,
 6.465600;-8.899200;-4.000000;,
 8.899200;-6.465600;0.000000;,
 8.899200;-6.465600;-4.000000;,
 10.461600;-3.399200;0.000000;,
 10.461600;-3.399200;-4.000000;,
 -1.100000;-7.562500;-11.000000;,
 1.100000;-7.562500;-11.000000;,
 1.100000;7.562500;-11.000000;,
 -1.100000;7.562500;-11.000000;,
 1.833300;-10.083300;-2.000000;,
 -1.833300;-10.083300;-2.000000;,
 1.833300;10.083300;-2.000000;,
 -1.833300;10.083300;-2.000000;,
 -3.000000;10.000000;-3.000000;,
 3.000000;10.000000;-3.000000;,
 0.750000;16.000000;-1.000000;,
 -0.750000;16.000000;-1.000000;,
 -0.750000;16.000000;0.000000;,
 -3.000000;10.000000;0.000000;,
 3.000000;10.000000;0.000000;,
 0.750000;16.000000;0.000000;,
 8.250000;0.000000;-8.000000;,
 7.622000;3.157100;-8.000000;,
 5.833600;5.833600;-8.000000;,
 3.157100;7.622000;-8.000000;,
 0.000000;8.250000;-8.000000;,
 -3.157100;7.622000;-8.000000;,
 -5.833600;5.833600;-8.000000;,
 -7.622000;3.157100;-8.000000;,
 -8.250000;0.000000;-8.000000;,
 -7.622000;-3.157100;-8.000000;,
 -5.833600;-5.833600;-8.000000;,
 -3.157100;-7.622000;-8.000000;,
 0.000000;-8.250000;-8.000000;,
 3.157100;-7.622000;-8.000000;,
 5.833600;-5.833600;-8.000000;,
 7.622000;-3.157100;-8.000000;,
 7.622000;-3.157100;-4.000000;,
 5.833600;-5.833600;-4.000000;,
 3.157100;-7.622000;-4.000000;,
 0.000000;-8.250000;-4.000000;,
 -3.157100;-7.622000;-4.000000;,
 -5.833600;-5.833600;-4.000000;,
 -7.622000;-3.157100;-4.000000;,
 -8.250000;0.000000;-4.000000;,
 -7.622000;3.157100;-4.000000;,
 -5.833600;5.833600;-4.000000;,
 -3.157100;7.622000;-4.000000;,
 0.000000;8.250000;-4.000000;,
 3.157100;7.622000;-4.000000;,
 5.833600;5.833600;-4.000000;,
 7.622000;3.157100;-4.000000;,
 8.250000;0.000000;-4.000000;,
 11.000000;0.000000;-4.000000;,
 10.461600;3.399200;-4.000000;,
 8.899200;6.465600;0.000000;,
 8.899200;6.465600;-4.000000;,
 8.899200;6.465600;-4.000000;,
 6.465600;8.899200;-4.000000;,
 3.399200;10.461600;-4.000000;,
 0.000000;11.000000;-4.000000;,
 -3.399200;10.461600;-4.000000;,
 -6.465600;8.899200;-4.000000;,
 -8.899200;6.465600;0.000000;,
 -8.899200;6.465600;-4.000000;,
 -8.899200;6.465600;-4.000000;,
 -10.461600;3.399200;-4.000000;,
 -11.000000;0.000000;-4.000000;,
 -10.461600;-3.399200;-4.000000;,
 -8.899200;-6.465600;0.000000;,
 -8.899200;-6.465600;-4.000000;,
 -8.899200;-6.465600;-4.000000;,
 -6.465600;-8.899200;-4.000000;,
 -3.399200;-10.461600;-4.000000;,
 0.000000;-11.000000;-4.000000;,
 3.399200;-10.461600;-4.000000;,
 6.465600;-8.899200;-4.000000;,
 8.899200;-6.465600;0.000000;,
 8.899200;-6.465600;-4.000000;,
 8.899200;-6.465600;-4.000000;,
 10.461600;-3.399200;-4.000000;,
 -1.100000;-7.562500;-11.000000;,
 -1.100000;-7.562500;-11.000000;,
 1.100000;-7.562500;-11.000000;,
 1.100000;-7.562500;-11.000000;,
 1.100000;7.562500;-11.000000;,
 1.100000;7.562500;-11.000000;,
 -1.100000;7.562500;-11.000000;,
 -1.100000;7.562500;-11.000000;,
 1.833300;-10.083300;-2.000000;,
 -1.833300;-10.083300;-2.000000;,
 1.833300;10.083300;-2.000000;,
 -1.833300;10.083300;-2.000000;,
 -3.000000;10.000000;-3.000000;,
 -3.000000;10.000000;-3.000000;,
 3.000000;10.000000;-3.000000;,
 3.000000;10.000000;-3.000000;,
 0.750000;16.000000;-1.000000;,
 0.750000;16.000000;-1.000000;,
 -0.750000;16.000000;-1.000000;,
 -0.750000;16.000000;-1.000000;,
 -0.750000;16.000000;0.000000;,
 -3.000000;10.000000;0.000000;,
 3.000000;10.000000;0.000000;,
 0.750000;16.000000;0.000000;,
 8.250000;0.000000;-8.000000;,
 7.622000;3.157100;-8.000000;,
 5.833600;5.833600;-8.000000;,
 5.833600;5.833600;-8.000000;,
 3.157100;7.622000;-8.000000;,
 0.000000;8.250000;-8.000000;,
 -3.157100;7.622000;-8.000000;,
 -5.833600;5.833600;-8.000000;,
 -5.833600;5.833600;-8.000000;,
 -7.622000;3.157100;-8.000000;,
 -8.250000;0.000000;-8.000000;,
 -7.622000;-3.157100;-8.000000;,
 -5.833600;-5.833600;-8.000000;,
 -5.833600;-5.833600;-8.000000;,
 -3.157100;-7.622000;-8.000000;,
 0.000000;-8.250000;-8.000000;,
 3.157100;-7.622000;-8.000000;,
 5.833600;-5.833600;-8.000000;,
 5.833600;-5.833600;-8.000000;,
 7.622000;-3.157100;-8.000000;,
 5.833600;-5.833600;-4.000000;,
 -5.833600;-5.833600;-4.000000;,
 -5.833600;5.833600;-4.000000;,
 5.833600;5.833600;-4.000000;;
 124;
 3;135,133,131;,
 3;135,131,129;,
 3;130,138,137;,
 3;130,137,128;,
 3;134,136,139;,
 3;134,139,132;,
 3;53,52,51;,
 3;53,51,48;,
 3;49,50,55;,
 3;49,55,54;,
 3;159,158,156;,
 3;159,156,155;,
 3;159,155,154;,
 3;159,154,153;,
 3;159,153,151;,
 3;159,151,150;,
 3;159,150,149;,
 3;159,149,148;,
 3;159,148,146;,
 3;159,146,145;,
 3;159,145,144;,
 3;159,144,143;,
 3;159,143,141;,
 3;159,141,140;,
 3;56,57,86;,
 3;56,86,87;,
 3;57,142,163;,
 3;57,163,86;,
 3;58,59,84;,
 3;58,84,85;,
 3;59,60,83;,
 3;59,83,84;,
 3;60,61,82;,
 3;60,82,83;,
 3;61,147,162;,
 3;61,162,82;,
 3;62,63,80;,
 3;62,80,81;,
 3;63,64,79;,
 3;63,79,80;,
 3;64,65,78;,
 3;64,78,79;,
 3;65,152,161;,
 3;65,161,78;,
 3;66,67,76;,
 3;66,76,77;,
 3;67,68,75;,
 3;67,75,76;,
 3;68,69,74;,
 3;68,74,75;,
 3;69,157,160;,
 3;69,160,74;,
 3;70,71,72;,
 3;70,72,73;,
 3;71,56,87;,
 3;71,87,72;,
 3;89,2,1;,
 3;89,1,88;,
 3;92,90,2;,
 3;92,2,89;,
 3;93,6,4;,
 3;93,4,91;,
 3;94,8,6;,
 3;94,6,93;,
 3;95,10,8;,
 3;95,8,94;,
 3;96,12,10;,
 3;96,10,95;,
 3;97,14,12;,
 3;97,12,96;,
 3;100,98,14;,
 3;100,14,97;,
 3;101,18,16;,
 3;101,16,99;,
 3;102,20,18;,
 3;102,18,101;,
 3;103,22,20;,
 3;103,20,102;,
 3;106,104,22;,
 3;106,22,103;,
 3;107,26,24;,
 3;107,24,105;,
 3;108,28,26;,
 3;108,26,107;,
 3;109,30,28;,
 3;109,28,108;,
 3;110,32,30;,
 3;110,30,109;,
 3;111,34,32;,
 3;111,32,110;,
 3;114,112,34;,
 3;114,34,111;,
 3;115,38,36;,
 3;115,36,113;,
 3;88,1,38;,
 3;88,38,115;,
 3;39,37,35;,
 3;39,35,33;,
 3;39,33,31;,
 3;39,31,29;,
 3;39,29,27;,
 3;39,27,25;,
 3;39,25,23;,
 3;39,23,21;,
 3;39,21,19;,
 3;39,19,17;,
 3;39,17,15;,
 3;39,15,13;,
 3;39,13,11;,
 3;39,11,9;,
 3;39,9,7;,
 3;39,7,5;,
 3;39,5,3;,
 3;39,3,0;,
 3;123,121,119;,
 3;123,119,117;,
 3;118,124,125;,
 3;118,125,116;,
 3;122,127,126;,
 3;122,126,120;,
 3;45,47,43;,
 3;45,43,40;,
 3;41,42,46;,
 3;41,46,44;;

 MeshNormals {
  164;
  0.000000;0.000000;-1.000000;,
  0.998609;0.052723;0.000000;,
  0.933442;0.358728;0.000000;,
  0.000000;0.000000;-1.000000;,
  0.776904;0.629620;0.000000;,
  0.000000;0.000000;-1.000000;,
  0.544314;0.838882;0.000000;,
  0.000000;0.000000;-1.000000;,
  0.258449;0.966025;0.000000;,
  0.000000;0.000000;-1.000000;,
  -0.052723;0.998609;0.000000;,
  0.000000;0.000000;-1.000000;,
  -0.358728;0.933442;0.000000;,
  0.000000;0.000000;-1.000000;,
  -0.629620;0.776904;0.000000;,
  0.000000;0.000000;-1.000000;,
  -0.838882;0.544314;0.000000;,
  0.000000;0.000000;-1.000000;,
  -0.966025;0.258449;0.000000;,
  0.000000;0.000000;-1.000000;,
  -0.998609;-0.052723;0.000000;,
  0.000000;0.000000;-1.000000;,
  -0.933442;-0.358728;0.000000;,
  0.000000;0.000000;-1.000000;,
  -0.776904;-0.629620;0.000000;,
  0.000000;0.000000;-1.000000;,
  -0.544314;-0.838882;0.000000;,
  0.000000;0.000000;-1.000000;,
  -0.258449;-0.966025;0.000000;,
  0.000000;0.000000;-1.000000;,
  0.052723;-0.998609;0.000000;,
  0.000000;0.000000;-1.000000;,
  0.358728;-0.933442;0.000000;,
  0.000000;0.000000;-1.000000;,
  0.629620;-0.776904;0.000000;,
  0.000000;0.000000;-1.000000;,
  0.838882;-0.544314;0.000000;,
  0.000000;0.000000;-1.000000;,
  0.966025;-0.258449;0.000000;,
  0.000000;0.000000;-1.000000;,
  -0.996697;0.000000;-0.081209;,
  0.996697;0.000000;-0.081209;,
  0.996697;0.000000;-0.081209;,
  -0.996697;0.000000;-0.081209;,
  0.996697;0.000000;-0.081209;,
  -0.996697;0.000000;-0.081209;,
  0.996697;0.000000;-0.081209;,
  -0.996697;0.000000;-0.081209;,
  -0.936329;0.351123;0.000000;,
  0.936329;0.351123;0.000000;,
  0.936329;0.351123;0.000000;,
  -0.936329;0.351123;0.000000;,
  -0.936329;0.351123;0.000000;,
  -0.936329;0.351123;0.000000;,
  0.936329;0.351123;0.000000;,
  0.936329;0.351123;0.000000;,
  0.997809;0.066160;0.000000;,
  0.896535;0.442972;0.000000;,
  0.658778;0.752338;0.000000;,
  0.320726;0.947172;0.000000;,
  -0.066160;0.997809;0.000000;,
  -0.442972;0.896535;0.000000;,
  -0.752338;0.658778;0.000000;,
  -0.947172;0.320726;0.000000;,
  -0.997809;-0.066160;0.000000;,
  -0.896535;-0.442972;0.000000;,
  -0.658778;-0.752338;0.000000;,
  -0.320726;-0.947172;0.000000;,
  0.066160;-0.997809;0.000000;,
  0.442972;-0.896535;0.000000;,
  0.752338;-0.658778;0.000000;,
  0.947172;-0.320726;0.000000;,
  0.896535;-0.442972;0.000000;,
  0.658778;-0.752338;0.000000;,
  0.320726;-0.947172;0.000000;,
  -0.066160;-0.997809;0.000000;,
  -0.442972;-0.896535;0.000000;,
  -0.752338;-0.658778;0.000000;,
  -0.947172;-0.320726;0.000000;,
  -0.997809;0.066160;0.000000;,
  -0.896535;0.442972;0.000000;,
  -0.658778;0.752338;0.000000;,
  -0.320726;0.947172;0.000000;,
  0.066160;0.997809;0.000000;,
  0.442972;0.896535;0.000000;,
  0.752338;0.658778;0.000000;,
  0.947172;0.320726;0.000000;,
  0.997809;-0.066160;0.000000;,
  0.998609;-0.052723;0.000000;,
  0.966025;0.258449;0.000000;,
  0.776904;0.629620;0.000000;,
  0.838882;0.544314;0.000000;,
  0.838882;0.544314;0.000000;,
  0.629620;0.776904;0.000000;,
  0.358729;0.933442;0.000000;,
  0.052723;0.998609;0.000000;,
  -0.258449;0.966025;0.000000;,
  -0.544314;0.838882;0.000000;,
  -0.838882;0.544314;0.000000;,
  -0.776904;0.629620;0.000000;,
  -0.776904;0.629620;0.000000;,
  -0.933442;0.358729;0.000000;,
  -0.998609;0.052723;0.000000;,
  -0.966025;-0.258449;0.000000;,
  -0.776904;-0.629620;0.000000;,
  -0.838882;-0.544314;0.000000;,
  -0.838882;-0.544314;0.000000;,
  -0.629620;-0.776904;0.000000;,
  -0.358729;-0.933442;0.000000;,
  -0.052723;-0.998609;0.000000;,
  0.258449;-0.966025;0.000000;,
  0.544314;-0.838882;0.000000;,
  0.838882;-0.544314;0.000000;,
  0.776904;-0.629620;0.000000;,
  0.776904;-0.629620;0.000000;,
  0.933442;-0.358729;0.000000;,
  0.000000;-0.962942;-0.269709;,
  0.000000;0.000000;-1.000000;,
  0.000000;-0.962942;-0.269709;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.962942;-0.269709;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.962942;-0.269709;,
  0.000000;0.000000;-1.000000;,
  0.000000;-0.962942;-0.269709;,
  0.000000;-0.962942;-0.269709;,
  0.000000;0.962942;-0.269709;,
  0.000000;0.962942;-0.269709;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.316228;-0.948683;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.316228;-0.948683;,
  0.000000;1.000000;0.000000;,
  0.000000;0.316228;-0.948683;,
  0.000000;1.000000;0.000000;,
  0.000000;0.316228;-0.948683;,
  0.000000;1.000000;0.000000;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.000000;-1.000000;,
  0.000000;1.000000;0.000000;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.000000;-1.000000;,
  0.658778;0.752338;0.000000;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.000000;-1.000000;,
  -0.752338;0.658778;0.000000;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.000000;-1.000000;,
  -0.658778;-0.752338;0.000000;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.000000;-1.000000;,
  0.752338;-0.658778;0.000000;,
  0.000000;0.000000;-1.000000;,
  0.000000;0.000000;-1.000000;,
  0.658778;-0.752338;0.000000;,
  -0.752338;-0.658778;0.000000;,
  -0.658778;0.752338;0.000000;,
  0.752338;0.658778;0.000000;;
  124;
  3;135,133,131;,
  3;135,131,129;,
  3;130,138,137;,
  3;130,137,128;,
  3;134,136,139;,
  3;134,139,132;,
  3;53,52,51;,
  3;53,51,48;,
  3;49,50,55;,
  3;49,55,54;,
  3;159,158,156;,
  3;159,156,155;,
  3;159,155,154;,
  3;159,154,153;,
  3;159,153,151;,
  3;159,151,150;,
  3;159,150,149;,
  3;159,149,148;,
  3;159,148,146;,
  3;159,146,145;,
  3;159,145,144;,
  3;159,144,143;,
  3;159,143,141;,
  3;159,141,140;,
  3;56,57,86;,
  3;56,86,87;,
  3;57,142,163;,
  3;57,163,86;,
  3;58,59,84;,
  3;58,84,85;,
  3;59,60,83;,
  3;59,83,84;,
  3;60,61,82;,
  3;60,82,83;,
  3;61,147,162;,
  3;61,162,82;,
  3;62,63,80;,
  3;62,80,81;,
  3;63,64,79;,
  3;63,79,80;,
  3;64,65,78;,
  3;64,78,79;,
  3;65,152,161;,
  3;65,161,78;,
  3;66,67,76;,
  3;66,76,77;,
  3;67,68,75;,
  3;67,75,76;,
  3;68,69,74;,
  3;68,74,75;,
  3;69,157,160;,
  3;69,160,74;,
  3;70,71,72;,
  3;70,72,73;,
  3;71,56,87;,
  3;71,87,72;,
  3;89,2,1;,
  3;89,1,88;,
  3;92,90,2;,
  3;92,2,89;,
  3;93,6,4;,
  3;93,4,91;,
  3;94,8,6;,
  3;94,6,93;,
  3;95,10,8;,
  3;95,8,94;,
  3;96,12,10;,
  3;96,10,95;,
  3;97,14,12;,
  3;97,12,96;,
  3;100,98,14;,
  3;100,14,97;,
  3;101,18,16;,
  3;101,16,99;,
  3;102,20,18;,
  3;102,18,101;,
  3;103,22,20;,
  3;103,20,102;,
  3;106,104,22;,
  3;106,22,103;,
  3;107,26,24;,
  3;107,24,105;,
  3;108,28,26;,
  3;108,26,107;,
  3;109,30,28;,
  3;109,28,108;,
  3;110,32,30;,
  3;110,30,109;,
  3;111,34,32;,
  3;111,32,110;,
  3;114,112,34;,
  3;114,34,111;,
  3;115,38,36;,
  3;115,36,113;,
  3;88,1,38;,
  3;88,38,115;,
  3;39,37,35;,
  3;39,35,33;,
  3;39,33,31;,
  3;39,31,29;,
  3;39,29,27;,
  3;39,27,25;,
  3;39,25,23;,
  3;39,23,21;,
  3;39,21,19;,
  3;39,19,17;,
  3;39,17,15;,
  3;39,15,13;,
  3;39,13,11;,
  3;39,11,9;,
  3;39,9,7;,
  3;39,7,5;,
  3;39,5,3;,
  3;39,3,0;,
  3;123,121,119;,
  3;123,119,117;,
  3;118,124,125;,
  3;118,125,116;,
  3;122,127,126;,
  3;122,126,120;,
  3;45,47,43;,
  3;45,43,40;,
  3;41,42,46;,
  3;41,46,44;;
 }

 MeshTextureCoords {
  164;
  0.390600;-0.218800;,
  1.000000;-0.390600;,
  1.000000;-0.443700;,
  0.382200;-0.271900;,
  1.000000;-0.251600;,
  0.357800;-0.319800;,
  1.000000;-0.289600;,
  0.319800;-0.357800;,
  1.000000;-0.337500;,
  0.271900;-0.382200;,
  1.000000;-0.390600;,
  0.218800;-0.390600;,
  1.000000;-0.443700;,
  0.165600;-0.382200;,
  1.000000;-0.491700;,
  0.117700;-0.357800;,
  1.000000;-0.491700;,
  0.079700;-0.319800;,
  1.000000;-0.443700;,
  0.055300;-0.271900;,
  1.000000;-0.390600;,
  0.046900;-0.218800;,
  1.000000;-0.337500;,
  0.055300;-0.165600;,
  1.000000;-0.529700;,
  0.079700;-0.117700;,
  1.000000;-0.491700;,
  0.117700;-0.079700;,
  1.000000;-0.443700;,
  0.165600;-0.055300;,
  1.000000;-0.390600;,
  0.218800;-0.046900;,
  1.000000;-0.337500;,
  0.271900;-0.055300;,
  1.000000;-0.289600;,
  0.319800;-0.079700;,
  1.000000;-0.289600;,
  0.357800;-0.117700;,
  1.000000;-0.337500;,
  0.382200;-0.165600;,
  0.859400;-0.086700;,
  -0.136700;-0.184300;,
  -0.136700;-0.479700;,
  0.859400;-0.382100;,
  0.039100;-0.135100;,
  1.035200;-0.037400;,
  0.039100;-0.529000;,
  1.035200;-0.431300;,
  -0.058600;-0.195300;,
  -0.058600;-0.195300;,
  -0.019500;-0.312500;,
  -0.019500;-0.312500;,
  0.000000;-0.312500;,
  0.000000;-0.195300;,
  0.000000;-0.195300;,
  0.000000;-0.312500;,
  -0.078100;0.000000;,
  -0.078100;-0.030800;,
  0.057000;0.078100;,
  0.030800;0.078100;,
  0.000000;0.078100;,
  -0.030800;0.078100;,
  -0.078100;-0.057000;,
  -0.078100;-0.030800;,
  -0.078100;0.000000;,
  -0.078100;0.030800;,
  -0.057000;0.078100;,
  -0.030800;0.078100;,
  0.000000;0.078100;,
  0.030800;0.078100;,
  -0.078100;0.057000;,
  -0.078100;0.030800;,
  -0.039100;0.030800;,
  -0.039100;0.057000;,
  0.030800;0.039100;,
  0.000000;0.039100;,
  -0.030800;0.039100;,
  -0.057000;0.039100;,
  -0.039100;0.030800;,
  -0.039100;0.000000;,
  -0.039100;-0.030800;,
  -0.039100;-0.057000;,
  -0.030800;0.039100;,
  0.000000;0.039100;,
  0.030800;0.039100;,
  0.057000;0.039100;,
  -0.039100;-0.030800;,
  -0.039100;0.000000;,
  0.937500;-0.390600;,
  0.937500;-0.443700;,
  1.000000;-0.491700;,
  0.937500;-0.251600;,
  0.937500;-0.491700;,
  0.937500;-0.289600;,
  0.937500;-0.337500;,
  0.937500;-0.390600;,
  0.937500;-0.443700;,
  0.937500;-0.491700;,
  1.000000;-0.529700;,
  0.937500;-0.491700;,
  0.937500;-0.529700;,
  0.937500;-0.443700;,
  0.937500;-0.390600;,
  0.937500;-0.337500;,
  1.000000;-0.289600;,
  0.937500;-0.529700;,
  0.937500;-0.289600;,
  0.937500;-0.491700;,
  0.937500;-0.443700;,
  0.937500;-0.390600;,
  0.937500;-0.337500;,
  0.937500;-0.289600;,
  1.000000;-0.251600;,
  0.937500;-0.289600;,
  0.937500;-0.251600;,
  0.937500;-0.337500;,
  0.310500;0.136700;,
  0.310500;-0.184300;,
  0.353500;0.136700;,
  0.353500;-0.184300;,
  0.353500;0.136700;,
  0.353500;-0.479700;,
  0.310500;0.136700;,
  0.310500;-0.479700;,
  0.367800;-0.039100;,
  0.296200;-0.039100;,
  0.367800;-0.039100;,
  0.296200;-0.039100;,
  -0.058600;0.058600;,
  -0.058600;-0.195300;,
  0.058600;0.058600;,
  0.058600;-0.195300;,
  0.014600;0.019500;,
  0.014600;-0.312500;,
  -0.014600;0.019500;,
  -0.014600;-0.312500;,
  -0.014600;0.000000;,
  -0.058600;0.000000;,
  0.058600;0.000000;,
  0.014600;0.000000;,
  0.080600;0.000000;,
  0.074400;-0.030800;,
  -0.078100;-0.057000;,
  0.057000;-0.057000;,
  0.030800;-0.074400;,
  0.000000;-0.080600;,
  -0.030800;-0.074400;,
  -0.057000;0.078100;,
  -0.057000;-0.057000;,
  -0.074400;-0.030800;,
  -0.080600;0.000000;,
  -0.074400;0.030800;,
  -0.078100;0.057000;,
  -0.057000;0.057000;,
  -0.030800;0.074400;,
  0.000000;0.080600;,
  0.030800;0.074400;,
  0.057000;0.078100;,
  0.057000;0.057000;,
  0.074400;0.030800;,
  0.057000;0.039100;,
  -0.039100;0.057000;,
  -0.057000;0.039100;,
  -0.039100;-0.057000;;
 }

 VertexDuplicationIndices {
  164;
  88;
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  32,
  33,
  34,
  35,
  36,
  37,
  38,
  39,
  40,
  41,
  42,
  43,
  44,
  45,
  46,
  47,
  48,
  49,
  50,
  51,
  52,
  53,
  54,
  55,
  56,
  57,
  58,
  59,
  60,
  61,
  62,
  63,
  64,
  65,
  66,
  67,
  68,
  69,
  70,
  71,
  72,
  73,
  74,
  75,
  76,
  77,
  78,
  79,
  80,
  81,
  82,
  83,
  84,
  85,
  86,
  87,
  0,
  3,
  4,
  5,
  5,
  7,
  9,
  11,
  13,
  15,
  16,
  17,
  17,
  19,
  21,
  23,
  24,
  25,
  25,
  27,
  29,
  31,
  33,
  35,
  36,
  37,
  37,
  39,
  40,
  40,
  41,
  41,
  42,
  42,
  43,
  43,
  44,
  45,
  46,
  47,
  48,
  48,
  49,
  49,
  50,
  50,
  51,
  51,
  52,
  53,
  54,
  55,
  56,
  57,
  58,
  58,
  59,
  60,
  61,
  62,
  62,
  63,
  64,
  65,
  66,
  66,
  67,
  68,
  69,
  70,
  70,
  71,
  73,
  77,
  81,
  85;
 }

 MeshMaterialList {
  2;
  124;
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1,
  1;

  Material material_1 {
   1.000000;1.000000;1.000000;1.000000;;
   11.313700;
   1.000000;1.000000;1.000000;;
   0.000000;0.000000;0.000000;;

   TextureFilename {
    "dirtymetal.jpg";
   }
  }

  Material material_2 {
   1.000000;1.000000;1.000000;1.000000;;
   11.313700;
   1.000000;1.000000;1.000000;;
   0.000000;0.000000;0.000000;;

   TextureFilename {
    "914panel.jpg";
   }
  }
 }

 XSkinMeshHeader {
  1;
  1;
  1;
 }

 SkinWeights {
  "World";
  164;
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  32,
  33,
  34,
  35,
  36,
  37,
  38,
  39,
  40,
  41,
  42,
  43,
  44,
  45,
  46,
  47,
  48,
  49,
  50,
  51,
  52,
  53,
  54,
  55,
  56,
  57,
  58,
  59,
  60,
  61,
  62,
  63,
  64,
  65,
  66,
  67,
  68,
  69,
  70,
  71,
  72,
  73,
  74,
  75,
  76,
  77,
  78,
  79,
  80,
  81,
  82,
  83,
  84,
  85,
  86,
  87,
  88,
  89,
  90,
  91,
  92,
  93,
  94,
  95,
  96,
  97,
  98,
  99,
  100,
  101,
  102,
  103,
  104,
  105,
  106,
  107,
  108,
  109,
  110,
  111,
  112,
  113,
  114,
  115,
  116,
  117,
  118,
  119,
  120,
  121,
  122,
  123,
  124,
  125,
  126,
  127,
  128,
  129,
  130,
  131,
  132,
  133,
  134,
  135,
  136,
  137,
  138,
  139,
  140,
  141,
  142,
  143,
  144,
  145,
  146,
  147,
  148,
  149,
  150,
  151,
  152,
  153,
  154,
  155,
  156,
  157,
  158,
  159,
  160,
  161,
  162,
  163;
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000,
  1.000000;
  1.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,1.000000;;
 }
}