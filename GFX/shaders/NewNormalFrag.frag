#version 110

//heavily based on this shader: http://irrlicht.sourceforge.net/forum//viewtopic.php?f=9&t=21186

varying vec3 N,TN;
varying vec3 v;

varying vec3 olightPos1;
varying vec3 olightPos2;
varying vec3 olightPos3;
varying vec3 olightPos4;

varying vec3 oTlightPos1;
varying vec3 oTlightPos2;
varying vec3 oTlightPos3;
varying vec3 oTlightPos4;

varying vec4 oLightColor1;
varying vec4 oLightColor2;
varying vec4 oLightColor3;
varying vec4 oLightColor4;

varying mat3 oNormalMatrix;

uniform sampler2D baseMap;
uniform sampler2D bumpMap;
uniform sampler2D specMap;

uniform vec4 ambientLight;

void main(void)
{
	
	vec3 distNormal = texture2D( bumpMap, gl_TexCoord[0].xy ).xyz;
	
	vec3 viewVec = normalize(-v);
	
	distNormal.xy*=vec2(2.0);
	distNormal.xy-=vec2(1.0);
	distNormal=(vec3(0.0,0.0,1.0)-distNormal)*4.0+distNormal;
	
	vec3 fN = normalize(distNormal);
	vec3 L1 = oTlightPos1;
	vec3 L2 = oTlightPos2;
	vec3 L3 = oTlightPos3;
	vec3 L4 = oTlightPos4;
	
	vec4 Idiff1 = vec4(0.0,0.0,0.0,1.0);
	vec4 Idiff2 = vec4(0.0,0.0,0.0,1.0);
	vec4 Idiff3 = vec4(0.0,0.0,0.0,1.0);
	vec4 Idiff4 = vec4(0.0,0.0,0.0,1.0);
	
	vec4 reflection1 = vec4(0.0,0.0,0.0,1.0);
	vec4 reflection2 = vec4(0.0,0.0,0.0,1.0);
	vec4 reflection3 = vec4(0.0,0.0,0.0,1.0);
	vec4 reflection4 = vec4(0.0,0.0,0.0,1.0);
	
	vec3 refNormDir = normalize(TN);
	float lambertTerm;
	//if (oLightColor1.x>0.001 || oLightColor1.y>0.001 || oLightColor1.z>0.001) {
	
		L1 = normalize(L1);
		Idiff1 = oLightColor1 * vec4(max(dot(fN,L1), 0.0));
		L1 = normalize(olightPos1);
	
		lambertTerm = dot(refNormDir,L1);
		//if (lambertTerm>0.001) {
			reflection1 = min(pow(max(0.0,dot(normalize(L1+viewVec),refNormDir)),20.0),1.0)*texture2D( specMap, gl_TexCoord[0].xy );
		//}
		reflection1.x=min(1.0,reflection1.x);
		reflection1.y=min(1.0,reflection1.y);
		reflection1.z=min(1.0,reflection1.z);
		reflection1.w=1.0;
		
		Idiff1+=reflection1*oLightColor1*vec4(15.0,15.0,15.0,1.0);
	//}
	//if (oLightColor2.x>0.001 || oLightColor2.y>0.001 || oLightColor2.z>0.001) {
	
		L2 = normalize(L2);
		Idiff2 = oLightColor2 * vec4(max(dot(fN,L2), 0.0));
		L2 = normalize(olightPos2);
	
		lambertTerm = dot(refNormDir,L2);
		//if (lambertTerm>0.001) {
			reflection2 = min(pow(max(0.0,dot(normalize(L2+viewVec),refNormDir)),20.0),1.0)*texture2D( specMap, gl_TexCoord[0].xy );
		//}
		reflection2.x=min(1.0,reflection2.x);
		reflection2.y=min(1.0,reflection2.y);
		reflection2.z=min(1.0,reflection2.z);
		reflection2.w=1.0;
		
		Idiff2+=reflection2*oLightColor2*vec4(15.0,15.0,15.0,1.0);
	//}
	//if (oLightColor3.x>0.001 || oLightColor3.y>0.001 || oLightColor3.z>0.001) {
	
		L3 = normalize(L3);
		Idiff3 = oLightColor3 * vec4(max(dot(fN,L3), 0.0));
		L3 = normalize(olightPos3);
	
		lambertTerm = dot(refNormDir,L3);
		//if (lambertTerm>0.001) {
			reflection3 = min(pow(max(0.0,dot(normalize(L3+viewVec),refNormDir)),20.0),1.0)*texture2D( specMap, gl_TexCoord[0].xy );
		//}
		reflection3.x=min(1.0,reflection3.x);
		reflection3.y=min(1.0,reflection3.y);
		reflection3.z=min(1.0,reflection3.z);
		reflection3.w=1.0;
		
		Idiff3+=reflection3*oLightColor3*vec4(15.0,15.0,15.0,1.0);
	//}
	//if (oLightColor4.x>0.001 || oLightColor4.y>0.001 || oLightColor4.z>0.001) {
	
		L4 = normalize(L4);
		Idiff4 = oLightColor4 * vec4(max(dot(fN,L4), 0.0));
		L4 = normalize(olightPos2);
	
		lambertTerm = dot(refNormDir,L4);
		//if (lambertTerm>0.001) {
			reflection4 = min(pow(max(0.0,dot(normalize(L4+viewVec),refNormDir)),20.0),1.0)*texture2D( specMap, gl_TexCoord[0].xy );
		//}
		reflection4.x=min(1.0,reflection4.x);
		reflection4.y=min(1.0,reflection4.y);
		reflection4.z=min(1.0,reflection4.z);
		reflection4.w=1.0;
		
		Idiff4+=reflection4*oLightColor4*vec4(15.0,15.0,15.0,1.0);
	//}
	
	Idiff1.w = 1.0; Idiff2.w = 1.0; Idiff3.w = 1.0; Idiff4.w = 1.0;
	
	vec4 fdiff1 = Idiff1;
	vec4 fdiff2 = Idiff2;
	vec4 fdiff3 = Idiff3;
	vec4 fdiff4 = Idiff4;
	
	if (Idiff1.x>1.0) fdiff1.yz += vec2(Idiff1.x-1.0);
	if (Idiff1.y>1.0) fdiff1.xz += vec2(Idiff1.y-1.0);
	if (Idiff1.z>1.0) fdiff1.yx += vec2(Idiff1.z-1.0);
	
	if (Idiff2.x>1.0) fdiff2.yz += vec2(Idiff2.x-1.0);
	if (Idiff2.y>1.0) fdiff2.xz += vec2(Idiff2.y-1.0);
	if (Idiff2.z>1.0) fdiff2.yx += vec2(Idiff2.z-1.0);
	
	if (Idiff3.x>1.0) fdiff3.yz += vec2(Idiff3.x-1.0);
	if (Idiff3.y>1.0) fdiff3.xz += vec2(Idiff3.y-1.0);
	if (Idiff3.z>1.0) fdiff3.yx += vec2(Idiff3.z-1.0);
	
	if (Idiff4.x>1.0) fdiff4.yz += vec2(Idiff4.x-1.0);
	if (Idiff4.y>1.0) fdiff4.xz += vec2(Idiff4.y-1.0);
	if (Idiff4.z>1.0) fdiff4.yx += vec2(Idiff4.z-1.0);
	
	gl_FragColor = vec4(fdiff1+fdiff2+fdiff3+fdiff4+ambientLight)*vec4(texture2D( baseMap, gl_TexCoord[0].xy ).xyz,1.0);
}