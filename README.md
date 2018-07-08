# ActiveTask
C++ でアクティブアプリ(選択中のソフト)のタイトルを取得する物 (Java と組み合わせる用に)

参考にしたサイト: [Getting Active Window Title (http://www.cplusplus.com)](http://www.cplusplus.com/forum/windows/120718/)

# Usage
[Releases](https://github.com/SimplyRin/ActiveTask/releases) から [ActiveTask.exe](https://github.com/SimplyRin/ActiveTask/releases/download/1.0/ActiveTask.exe) をダウンロード

Java で Windows の ActiveTask を取得するコード
```Java
public String getActiveWindowTitle() {
	ProcessBuilder processBuilder = new ProcessBuilder("ActiveTask.exe");
	Process process;
	try {
		process = processBuilder.start();
	} catch (IOException e) {
		return null;
	}
	BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(process.getInputStream()));

	String title = null;
	try {
		title = bufferedReader.readLine();
	} catch (IOException e) {
		return null;
	}

	return title;
}
```
