<?php
//arquivo utilizada para a valida��o do usu�rio
include "../Conexao.inc";
@session_start();
if(IsSet($_SESSION["nome_usuario"])){
	$nome_usuario = $_SESSION["nome_usuario"];
}
$resultado = mysqli_query($conexao,"SELECT * FROM Permissoes WHERE NI=$nome_usuario");


@$query = mysqli_query($conexao,$resultado);

while($row = mysqli_fetch_array($resultado)){

	$usuario = $row["usuario"];

}

if($usuario!=1){
	header("location:login.php");
	exit;
}


mysqli_close($conexao);

?>

